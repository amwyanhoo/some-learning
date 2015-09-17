// AVLTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdafx.h"
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

#define LH 1	//这种重命名的语句，最终用的是中间的别名，最后一列是其真实值。
#define EH 0
#define RH -1

typedef struct BiTNode{
	int data;
	int bf;	//结点的平衡因子
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

//对以p为根的二叉排序树作右旋处理
void R_Rotate(BiTree *p){
	BiTree L;
	L = (*p)->lchild;
	(*p)->lchild = L->rchild;
	L->rchild = *p;
	(*p) = L;
}



//对以p为根的二叉排序树作左旋处理
void L_Rotate(BiTree *p){
	BiTree R;
	R = (*p)->rchild;
	(*p)->rchild = R->lchild;
	R->lchild = *p;
	(*p) = R;
}

//左平衡旋转处理

/*对以指针T所指结点为根的二叉树作左平衡旋转处理
本算法结束时，指针T指向新的结点*/
void LeftBalance(BiTree *T){
	BiTree L, Lr;
	L = (*T)->lchild;	//L指向T的左子树根结点
	switch (L->bf){	//检查T的左子树的平衡度，并作相应平衡处理
		case LH:	//LL情况,新结点插在T的左孩子的左子树上，做单向右旋处理
			(*T)->bf = L->bf = EH;
			R_Rotate(T);
			break;
		case RH://LR情况，新结点插在T的左孩子的右子树上，要进行双旋平衡处理（先左后右）
			Lr = L->rchild;
			switch (Lr->bf){
				case LH:	//插在右子树的左孩子上
					(*T)->bf = RH;
					L->bf = EH;
					break;
				case EH:
					(*T)->bf=L->bf = EH;
					break;
				case RH:
					(*T)->bf = EH;
					L->bf = LH;
					break;
			}
			Lr->bf = EH;
			L_Rotate(&(*T)->lchild);	//对T的左子树作左旋平衡处理
			R_Rotate(T);	//对T作右旋平衡处理
	}
}

//右旋处理
void RightBalance(BiTree *T)
{
	//以T为根节点的二叉排序树进行右平衡旋转处理  
	BiTree rc, ld;
	rc = (*T)->rchild;
	switch (rc->bf)
	{
	case RH:
		//RR情况，新结点插在右孩子的右子树上，进行单向左旋处理
		(*T)->bf = rc->bf = EH;
		L_Rotate(T);
		break;
	case LH:
		//RL情况， 新结点插在T的右孩子的左子树上，要进行右平衡旋转处理（先右再左）
		ld = rc->lchild;
		switch (ld->bf)
		{
		case LH:
			(*T)->bf = LH;
			rc->bf = EH;
			break;
		case EH:
			(*T)->bf = rc->bf = EH;
			break;
		case RH:
			(*T)->bf = EH;
			rc->bf = RH;
			break;
		}
		ld->bf = EH;
		R_Rotate(&(*T)->rchild);//先对T的右子树进行单向右旋处理  
		L_Rotate(T);        //再对T进行单向左旋处理  
	}
}

/*若因为插入而使得二叉排序树失去平衡，则做平衡旋转处理
  taller反映树是否长高*/
bool InsertAVL(BiTree *T, int e, bool *taller){
	if (!*T){
		//插入新结点，树长高，置taller为true
		*T = (BiTree)malloc(sizeof(BiTNode));
		(*T)->data = e;
		(*T)->lchild = (*T)->rchild = NULL;
		(*T)->bf = EH;
		*taller = true;
	}
	else
	{
		if (e == (*T)->data){
			//树中已存在和e相同关键字的结点则不再插入
			*taller = false;
			return false;
		}
		if (e < (*T)->data){
			//继续在T的左子树中进行搜索
			if (!InsertAVL(&(*T)->lchild, e, taller)){
				return false;
			}
			if (taller){//已插入到T的左子树中且左子树长高，
				switch ((*T)->bf)
				{
				case LH:	/*插入前左子树高于右子树，需要进行做平衡处理
                    		不管是单向左旋处理，还是先左后右平衡处理
                     	 	 处理结果都是使得插入新结点后，树的高度不变*/
					LeftBalance(T);
					*taller = false;
					break;
				case EH: //插入前左右子树等高，现在插入新街点后，左子树比右子树高
					(*T)->bf = LH;
					*taller = true;
					break;
				case RH: //插入前右子树比左子树高，现在新结点插入左子树后，树变为左右子树等高
					(*T)->bf = EH;
					*taller = false;
					break;
				}
			}
		}
		else{
			//应继续在T的右子树中进行搜索
			if (!InsertAVL(&(*T)->rchild, e, taller))	//未插入
				return false;
			if (*taller){
				switch ((*T)->bf)
				{
				case LH: //插入前左子树比右子树高，现在插入T的右子树后，左右子树等高
					(*T)->bf = EH;
					*taller = false;
					break;
				case EH://插入前左右子树等高，现在插入后，右子树比左子树高
					(*T)->bf = RH;
					*taller = true;
					break;
				case RH://插入前右子树比坐子树高，插入后，排序树失去平衡，需要进行右平衡处理
					RightBalance(T);
					*taller = false;
					break;
				default:
					break;
				}
			}
		}
	}
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[] = { 16, 3 ,7, 11 ,9 ,26 ,18, 14, 15 };
	int alen = sizeof(a) / sizeof(a[0]);
	BiTree T = NULL;
	bool taller;
	for (int i = 0; i < alen; i++){
		InsertAVL(&T, a[i], &taller);
	}
	return 0;
}

