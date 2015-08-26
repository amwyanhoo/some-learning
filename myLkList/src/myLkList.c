#include "stdio.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;/* ElemType���͸���ʵ������������������Ϊint */

typedef struct Node {
	ElemType data;
	struct Node *next;
} Node;
/* ����LinkList */
typedef struct Node *LinkList;

/* ��ʼ��˳�����Ա� */
Status InitList(LinkList *L){
	*L=(LinkList)malloc(sizeof(Node)); /* ����ͷ���,��ʹLָ���ͷ��� */
	if (!(*L)){ /* �洢����ʧ�� */
		return ERROR;
	}
    (*L)->next=NULL; /* ָ����Ϊ�� */
    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(LinkList L){
    int i=0;
    LinkList p=L->next; /* pָ���һ����� */
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
    printf("����L��ʼ����ϣ�ListLength(L)=%d\n",ListLength(L));
}
