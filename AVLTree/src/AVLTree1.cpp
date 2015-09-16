// AVLTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdafx.h"
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

#define LH 1	//��������������䣬�����õ����м�ı��������һ��������ʵֵ��
#define EH 0
#define RH -1

typedef struct BiTNode{
	int data;
	int bf;	//����ƽ������
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

//����pΪ���Ķ�������������������
void R_Rotate(BiTree *p){
	BiTree L;
	L = (*p)->lchild;
	(*p)->lchild = L->rchild;
	L->rchild = *p;
	(*p) = L;
}



//����pΪ���Ķ�������������������
void L_Rotate(BiTree *p){
	BiTree R;
	R = (*p)->rchild;
	(*p)->rchild = R->lchild;
	R->lchild = *p;
	(*p) = R;
}

//��ƽ����ת����

/*����ָ��T��ָ���Ϊ���Ķ���������ƽ����ת����
���㷨����ʱ��ָ��Tָ���µĽ��*/
void LeftBalance(BiTree *T){
	BiTree L, Lr;
	L = (*T)->lchild;	//Lָ��T�������������
	switch (L->bf){	//���T����������ƽ��ȣ�������Ӧƽ�⴦��
		case LH:	//LL����½�������T�����ӵ��������ϣ�Ҫ������������	
			(*T)->bf = L->bf = EH;
			R_Rotate(T);
			break;
		case RH://LR������������������ٸ�����
			Lr = L->rchild;
			switch (Lr->bf){
				case LH:
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
			L_Rotate(&(*T)->lchild);	//��T��������������ƽ�⴦��
			R_Rotate(T);	//��T������ƽ�⴦��
	}
}

//��������
void RightBalance(BiTree *T)
{
	//��TΪ���ڵ�Ķ���������������ƽ����ת����  
	BiTree rc, ld;
	rc = (*T)->rchild;
	switch (rc->bf)
	{
	case RH:
		//�½������Һ��ӵ��������ϣ����е�����������  RR
		(*T)->bf = rc->bf = EH;
		L_Rotate(T);
		break;
	case LH:
		//RL �½�����T���Һ��ӵ��������ϣ�Ҫ������ƽ����ת������������  
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
		R_Rotate(&(*T)->rchild);//�ȶ�T�����������е�����������  
		L_Rotate(T);        //�ٶ�T���е�����������  
	}
}

bool InsertAVL(BiTree *T, int e, bool *taller){
	if (!*T){
		//�����½�㣬�����ߣ���tallerΪtrue
		*T = (BiTree)malloc(sizeof(BiTNode));
		(*T)->data = e;
		(*T)->lchild = (*T)->rchild = NULL;
		(*T)->bf = EH;
		*taller = true;
	}
	else
	{
		if (e == (*T)->data){
			//�����Ѵ��ں�e��ͬ�ؼ��ֵĽ�����ٲ���
			*taller = false;
			return false;
		}
		if (e < (*T)->data){
			//Ӧ������T���������н�������
			if (!InsertAVL(&(*T)->lchild, e, taller)){
				return false;
			}
			if (taller){//�Ѳ��뵽T���������������������ߣ�
				switch ((*T)->bf)
				{
				case LH:
					LeftBalance(T);
					*taller = false;
					break;
				case EH:
					(*T)->bf = LH;
					*taller = true;
					break;
				case RH:
					(*T)->bf = EH;
					*taller = false;
					break;
				}
			}
		}
		else{
			//Ӧ������T���������н�������
			if (!InsertAVL(&(*T)->rchild, e, taller))	//δ����
				return false;
			if (*taller){
				switch ((*T)->bf)
				{
				case LH:
					(*T)->bf = EH;
					*taller = false;
					break;
				case EH:
					(*T)->bf = RH;
					*taller = true;
					break;
				case RH:
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

