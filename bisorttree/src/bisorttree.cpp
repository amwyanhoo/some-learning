// bisorttree.cpp : Defines the entry point for the console application.
//

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

typedef struct BiTNode{
	int data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
/*
递归查找二叉排序树T中是否存在key
指针f指向T的双亲，其初始调用值为NULL
若查找成功， 则指针p指向该数据元素结点，并返回TRUE
否则指针p指向查找路径上访问的最后一个结点并返回FALSE*/

bool SeachBST(BiTree T, int key, BiTree f, BiTree *p){
	if (!T){
		*p = f;
		return false;
	}
	else if (key == T->data){
		*p = T;
		return true;
	}
	else if (key < T->data){
		return SeachBST(T->lchild, key, T, p);
	}
	else{
		return SeachBST(T->rchild, key, T, p);
	}
}
//二叉排序树的插入
void InsertBST(BiTree *T, int key){
	BiTree p, s;
	if (!SeachBST(*T, key, NULL, &p)){//这一句执行完成后完成了对p的赋值，即指向查找路径上最后一个位置
		s = (BiTree)malloc(sizeof(BiTree));
		s->data = key;
		s->lchild = s->rchild = NULL;
		if (!p){
			*T = s;
		}
		else if (key < p->data){
			p->lchild = s;
		}
		else{
			p->rchild = s;
		}
	}
}

//二叉排序树的删除操作

//二又排序树T中存在关键字等于key的数据元素时，则删除该数据元素结点
//并返回true; 否则返回FALSE
bool DeleteBST(BiTree *T, int key) {
	bool Delete(BiTree *p);
	if (!T) { //不存在关键字等于key的数据元素
		return false;
	}
	else {
		if (key == (*T)->data) //找到关键字等于key的数据元素
			return Delete(T);
		else if (key < (*T)->data)
			return DeleteBST(&(*T)->lchild, key);
		else
			return DeleteBST(&(*T)->rchild, key);
	}
}

//二又排序树中删除结点p， 并重接它的左子树或右子树
bool Delete(BiTree *p) {
	BiTree q, s;
	if ((*p)->rchild == NULL) { // 右子树空则只需接它的左子树
		q = *p;
		*p = (*p)->lchild;
		free(q);
	}
	else if ((*p)->lchild == NULL) { //只需重接它右子树
		q = *p;
		*p = (*p)->rchild;
		free(q);
	}
	else { //左右子树均不空
		q = *p;
		s = (*p)->lchild;
		while (s->rchild) {  //转左，然后向右到尽头（找待删除结点的前驱)
			q = s;
			s = s->rchild;
		}
		(*p)->data = s->data;  //  s指向被删结点的直接前驱
		if (q != *p)
			q->rchild = s->lchild; //重接q的右子树
		else
			q->lchild = s->lchild; //重接q的左子树
		free(s);
	}
	return true;
}

int main()
{
	int a[] = { 62, 88, 58, 47, 35, 73, 99, 93, 29, 37, 36,51,49,48,56,50 };
	BiTree T = NULL;
	int alen = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < alen; i++){//创建二叉排序树
		InsertBST(&T, a[i]);
	}
	DeleteBST(&T, 47);
	return 0;
}
