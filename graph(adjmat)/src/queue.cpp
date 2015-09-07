#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
#define OK  1
#define ERROR  0
#define TRUE  1
#define FALSE 0

typedef int  Status ;
typedef int QElemType;

typedef struct {
	QElemType data[MAXSIZE];
	int front;  //头指针
	int rear;  //尾指针.若队列不空，指向队列尾元素的下一个位置
} Queue;

//初始化一个空队列Q
Status  InitQueue (Queue *Q){
	Q->front=0;
	Q->rear=0;
	return  OK;
}

//返回Q的元素个数，也就是队列的当前长度
int  QueueLength (Queue  Q) {
	return  (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

bool QueueEmpty(Queue Q){
	if(QueueLength(Q)==0){
		return 0;
	}else{
		return 1;
	}
}

Status  EnQueue (Queue  *Q,  QElemType  e) {
	if((Q->rear+1)%MAXSIZE==Q->front){
		return ERROR;
	}
//	if(Q->rear==MAXSIZE){
//		Q->data[Q->rear]=e;
//		Q->rear=0;
//	}else {
//		Q->data[Q->rear]=e;
//		Q->rear++;
//	}
	Q->data[Q->rear]=e;
	Q->rear=(Q->rear+1)%MAXSIZE;
	return OK;
}

Status DeQueue (Queue *Q,QElemType *e){
	if(Q->front==Q->rear){
		return ERROR;
	}
	(*e)=Q->data[Q->front];
	Q->data[Q->front]=NULL;
	Q->front=(Q->front+1)%MAXSIZE;
	return OK;
}

//typedef struct QNode {  //结点结构
//	QElemType data;
//	struct QNode *next;
//} QNode, *QueuePtr;
//typedef struct {
//	QueuePtr front, rear;  //队头、队尾指针
//} Queue;
//
////入队操作
//Status EnQuene(Queue *Q,QElemType e){
//	QueuePtr qn=(QueuePtr)malloc(sizeof(QueuePtr));
//	qn->data=e;
//	qn->next=NULL;
//	Q->rear->next=qn;
//	Q->rear=qn;
//	return OK;
//}
//
////出队操作
//Status DeQuene(Queue *Q,QElemType *e){
//	if(Q->front==Q->rear){
//		return ERROR;
//	}
//	QueuePtr q=Q->front->next;
//	(*e)=q->data;
//	Q->front->next=q->next;
//	if(Q->rear==q){
//		Q->rear=Q->front;
//	}
//	free(q);
//	return OK;
//}
