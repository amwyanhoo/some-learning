#include "stdafx.h"

//����˫�ױ�ʾ�����ṹ����
//#define  MAX_TREE_SIZE 100
//typedef int TElemType; //�������������ͣ� Ŀǰ�ݶ�Ϊ����
//typedef struct PTNode {  //���ṹ
//	TElemType data;	//�������
//	int parent;		//˫��λ��
//}PTNode;
//
//typedef struct {	//���ṹ
//	PTNode nodes[MAX_TREE_SIZE];	//�������
//	int r, n;	//����λ�úͽ����
//} PTree;
//
////���ĺ��ӱ�ʾ���ṹ����
//#define  MAX_TREE_SIZE 100
//typedef struct CTNode { // ���ӽ��
//	int child;
//	struct CTNode *next;
//}*ChildPtr;
//
//
//typedef struct {  //��ͷ�ṹ
//	TElemType data;
//	ChildPtr firstchild;
//} CTBox;
//
//typedef struct {  //���ṹ
//	CTBox nodes[MAX_TREE_SIZE]; /*�������*/
//	int r, n;  //����λ�úͽ����
//} CTree;
//
//int main(){
//	CTNode ctn3,ctn1={3, &ctn1};
//	CTNode ctn2={4,&ctn3};
//	CTNode ctn6,ctn4={5, &ctn1};
//	CTNode ctn5={6,&ctn3};
//	CTBox ctb1={1,&ctn1};
//	CTBox ctb2={2,&ctn4};
//	CTBox ctbb[2]={ctb1,ctb2};
//	CTree c={ctbb[],1,6};
//}
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//�������Ķ�֧������ṹ����"/
typedef char TElemType;
typedef struct BiTNode {  //���ṹ
	TElemType data;  //��������
	struct BiTNode *lchild, *rchild; 	//���Һ���ָ��
} BiTNode, *BiTree;

//ǰ�򷨴���������֮һ
BiTree CreateBiTree1(){
	char ch;
	BiTree T;
	//scanf("%c", &ch);
	cin >> ch;
	if (ch == '#'){
		T = NULL;
	}else{
		T = (BiTree)malloc(sizeof(BiTNode));
		T->data = ch;
		T->lchild = CreateBiTree1();
		T->rchild = CreateBiTree1();
	}
	return T;//���ظ��ڵ�
}

//ǰ�򷨴���������֮��
void CreateBiTree2(BiTree *T) {//�������˫��ָ����Ϊ��Ҫ�ı�ʵ�ε�ֵ��
	TElemType ch;
	//scanf("%c", &ch);
	cin >> ch;
	if (ch == '#') {
		*T = NULL;
	}else {
		*T = (BiTree)malloc(sizeof(BiTNode));
		/*if (!*T)
			exit(OVERFLOW);*/
		(*T)->data = ch; //���ɸ����
		CreateBiTree2(&(*T)->lchild);  //����������
		CreateBiTree2(&(*T)->rchild); //����������
	}
}


//����������
//��������ǰ������ݹ��㷨
void PreOrderTraverse(BiTree T) {
	if (T == NULL)
		return;
	printf("%c", T->data); 	//��ʾ��������.���Ը���Ϊ�����Խ�����
	PreOrderTraverse(T->lchild); 	//���������������
	PreOrderTraverse(T->rchild); //����������������
}

//����������������ݹ��㷨*1
void InOrderTraverse(BiTree T) {
	if (T == NULL)
		return;
	InOrderTraverse(T->lchild); //�������������
	printf("%c", T->data);  //��ʾ�������.���Ը���Ϊ�����Խ�����
	InOrderTraverse(T->rchild); //����������������
}

//�������ĺ�������ݹ��㷨
void PostOrderTraverse(BiTree T) {
	if (T == NULL)
		return;
	PostOrderTraverse(T->lchild); //�Ⱥ������������
	PostOrderTraverse(T->rchild); //�ٺ������������
	printf("%c", T->data);  //��ʾ�������.���Ը���Ϊ�����Խ�����
}

int  main(){
	BiTree T;
	T = CreateBiTree1();//�õ�һ�ַ�������������
	CreateBiTree2(&T);//�õڶ��ַ�������������
	PreOrderTraverse(T);//���
	//    getch();
	return 0;
}


