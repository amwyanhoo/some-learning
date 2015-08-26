#include "stdio.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node {
	ElemType data;
	struct Node *next;
} Node;
/* 定义LinkList */
typedef struct Node *LinkList;

/* 初始化顺序线性表 */
Status InitList(LinkList *L){
	*L=(LinkList)malloc(sizeof(Node)); /* 产生头结点,并使L指向此头结点 */
	if (!(*L)){ /* 存储分配失败 */
		return ERROR;
	}
    (*L)->next=NULL; /* 指针域为空 */
    return OK;
}

/* 初始条件：顺序线性表L已存在。操作结果：返回L中数据元素个数 */
int ListLength(LinkList L){
    int i=0;
    LinkList p=L->next; /* p指向第一个结点 */
    while(p){
        i++;
        p=p->next;
    }
    return i;
}

int main(){
    LinkList L;
    Status i;
    i=InitList(&L);
    printf("链表L初始化完毕，ListLength(L)=%d\n",ListLength(L));
}
