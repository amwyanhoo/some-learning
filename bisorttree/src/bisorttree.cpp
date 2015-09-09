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
�ݹ���Ҷ���������T���Ƿ����key
ָ��fָ��T��˫�ף����ʼ����ֵΪNULL
�����ҳɹ��� ��ָ��pָ�������Ԫ�ؽ�㣬������TRUE
����ָ��pָ�����·���Ϸ��ʵ����һ����㲢����FALSE*/

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
//�����������Ĳ���
void InsertBST(BiTree *T, int key){
	BiTree p, s;
	if (!SeachBST(*T, key, NULL, &p)){//��һ��ִ����ɺ�����˶�p�ĸ�ֵ����ָ�����·�������һ��λ��
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

//������������ɾ������

//����������T�д��ڹؼ��ֵ���key������Ԫ��ʱ����ɾ��������Ԫ�ؽ��
//������true; ���򷵻�FALSE
bool DeleteBST(BiTree *T, int key) {
	bool Delete(BiTree *p);
	if (!T) { //�����ڹؼ��ֵ���key������Ԫ��
		return false;
	}
	else {
		if (key == (*T)->data) //�ҵ��ؼ��ֵ���key������Ԫ��
			return Delete(T);
		else if (key < (*T)->data)
			return DeleteBST(&(*T)->lchild, key);
		else
			return DeleteBST(&(*T)->rchild, key);
	}
}

//������������ɾ�����p�� ���ؽ�������������������
bool Delete(BiTree *p) {
	BiTree q, s;
	if ((*p)->rchild == NULL) { // ����������ֻ�������������
		q = *p;
		*p = (*p)->lchild;
		free(q);
	}
	else if ((*p)->lchild == NULL) { //ֻ���ؽ���������
		q = *p;
		*p = (*p)->rchild;
		free(q);
	}
	else { //��������������
		q = *p;
		s = (*p)->lchild;
		while (s->rchild) {  //ת��Ȼ�����ҵ���ͷ���Ҵ�ɾ������ǰ��)
			q = s;
			s = s->rchild;
		}
		(*p)->data = s->data;  //  sָ��ɾ����ֱ��ǰ��
		if (q != *p)
			q->rchild = s->lchild; //�ؽ�q��������
		else
			q->lchild = s->lchild; //�ؽ�q��������
		free(s);
	}
	return true;
}

int main()
{
	int a[] = { 62, 88, 58, 47, 35, 73, 99, 93, 29, 37, 36,51,49,48,56,50 };
	BiTree T = NULL;
	int alen = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < alen; i++){//��������������
		InsertBST(&T, a[i]);
	}
	DeleteBST(&T, 47);
	return 0;
}
