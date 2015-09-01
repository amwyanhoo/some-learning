#include <stdio.h>

//二叉树的二叉线索存储结构定义
typedef enum {
	Link, Thread
} PointerTag; 	//Link==O表示指向左右孩子指针,Thread==l表示指向前驱或后继的线索
typedef char TElemType;

typedef struct BiThrNode {  //二叉线索存储量幸点结构*
	TElemType data;  //禽给点数据*/
	struct BiThrNode *lchild, *rchild; //左右孩子非旨针忖
	PointerTag LTag;
	PointerTag RTag; /*左右标志*/
} BiThrNode, *BiThrTree;

/*线索化的实质就是将二叉链表中的空指针改为指向前驱或后继的线索。 由于前驱
和后继的信息只有在遍历该二叉树时才能得到，所以线索化的过程就是在遍历的过程*/

//中序遍历线索化的递归函数代码如下:
BiThrTree pre;//全局变量，始终指向刚刚访问过的结点
void InThreading(BiThrTree p) {
	if (p){
		InThreading(p->lchild);  // 递归左子树线索化
		if (!p->lchild){  		//没有左孩子
			p->LTag = Thread;	//前驱线索
			p->lchild = pre;	//左孩子指针指向前驱
		}
		if (!pre->rchild){		//前驱没有右孩子
			pre->RTag = Thread;	//后继线索
			pre->rchild = p;	//前驱右孩子指针指向后继（当前节点p）
		}
		pre = p;				//保持pre指向p的前驱
		InThreading(p->rchild);  //递归右子树线索化
	}
}

/*T指向头给点.头节点的左链lchild指向根结点，头节点的右链rchild指向中序*/
 /* 遍历的最后一个结点。 中序遍历二叉线索链表表示的二叉树T*/
void InOrderTraverae_Thr(BiThrTree T) {
	BiThrTree p;
	p = T->lchild;
	while (p != T) {
		while (p->LTag == Link) {/*当vrag--O时循环到中JfJf.别第一个结点*/
			p = p->lchild;
		}
		printf("%c", p->data);  //显示节点数据，可以更改为其他对结点操作
		while (p->RTag == Thread && p->rchild != T) {
			p = p->rchild;
			printf("%c", p->data);
		}
		p = p->rchild;	//p进至其右子树根
	}
}
