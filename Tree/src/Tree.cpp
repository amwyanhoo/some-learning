#include "stdafx.h"

//树的双亲表示法结点结构定义
//#define  MAX_TREE_SIZE 100
//typedef int TElemType; //树结点的数据类型， 目前暂定为整型
//typedef struct PTNode {  //结点结构
//	TElemType data;	//结点数据
//	int parent;		//双亲位置
//}PTNode;
//
//typedef struct {	//树结构
//	PTNode nodes[MAX_TREE_SIZE];	//结点数组
//	int r, n;	//根的位置和结点数
//} PTree;
//
////树的孩子表示法结构定义
//#define  MAX_TREE_SIZE 100
//typedef struct CTNode { // 孩子结点
//	int child;
//	struct CTNode *next;
//}*ChildPtr;
//
//
//typedef struct {  //表头结构
//	TElemType data;
//	ChildPtr firstchild;
//} CTBox;
//
//typedef struct {  //树结构
//	CTBox nodes[MAX_TREE_SIZE]; /*结点数组*/
//	int r, n;  //树的位置和结点数
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

//二叉树的二支链表结点结构定义"/
typedef char TElemType;
typedef struct BiTNode {  //结点结构
	TElemType data;  //给点数据
	struct BiTNode *lchild, *rchild; 	//左右孩子指针
} BiTNode, *BiTree;

//前序法创建二叉树之一
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
	return T;//返回根节点
}

//前序法创建二叉树之二
void CreateBiTree2(BiTree *T) {//这里采用双重指针是为是要改变实参的值。
	TElemType ch;
	//scanf("%c", &ch);
	cin >> ch;
	if (ch == '#') {
		*T = NULL;
	}else {
		*T = (BiTree)malloc(sizeof(BiTNode));
		/*if (!*T)
			exit(OVERFLOW);*/
		(*T)->data = ch; //生成根结点
		CreateBiTree2(&(*T)->lchild);  //构造左子树
		CreateBiTree2(&(*T)->rchild); //构造右子树
	}
}


//遍历二叉树
//二叉树的前序遍历递归算法
void PreOrderTraverse(BiTree T) {
	if (T == NULL)
		return;
	printf("%c", T->data); 	//显示给点数据.可以更改为其他对结点操作
	PreOrderTraverse(T->lchild); 	//再先序遍历左子树
	PreOrderTraverse(T->rchild); //最后先序遍历右子树
}

//二又树的中序遍历递归算法*1
void InOrderTraverse(BiTree T) {
	if (T == NULL)
		return;
	InOrderTraverse(T->lchild); //中序遍历左子树
	printf("%c", T->data);  //显示结点数据.可以更改为其他对结点操作
	InOrderTraverse(T->rchild); //最后中序遍历右子树
}

//二又树的后序遍历递归算法
void PostOrderTraverse(BiTree T) {
	if (T == NULL)
		return;
	PostOrderTraverse(T->lchild); //先后序遍历左子树
	PostOrderTraverse(T->rchild); //再后序遍历右子树
	printf("%c", T->data);  //显示结点数据.可以更改为其他对结点操作
}

int  main(){
	BiTree T;
	T = CreateBiTree1();//用第一种方法建立二叉树
	CreateBiTree2(&T);//用第二种方法建立二叉树
	PreOrderTraverse(T);//输出
	//    getch();
	return 0;
}


