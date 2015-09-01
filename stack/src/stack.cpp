#include <stdlib.h>
#define MAXSIZE 20
#define OK  1
#define ERROR  0
#define TRUE  1
#define FALSE  0
typedef int SElemType; //SElemType类型依据实际情况而定，这里假设为int
typedef int  Status ;
//
//typedef struct {
//	SElemType data [MAXSIZE];
//	int top;  //用于栈顶指针
//} Sqstack;
//
////两栈共用空间结构
//typedef struct {
//	SElemType data[MAXSIZE];
//	int top1; //栈1栈顶指针
//	int top2; //栈2栈顶指针
//} SqDoubleStack;
//
////插入元素e为新的栈顶元素
//Status Push(Sqstack *S, SElemType e) {
//	if (S->top == MAXSIZE - 1) {  //栈满
//		return ERROR;
//	}
//	S->top++;	//栈顶指针加1
//	S->data[S->top] = e;	//将新插入元素赋值给栈顶空间
//	return OK;
//}
//
////若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
//Status Pop(Sqstack *S, SElemType e) {
//	if (S->top == -1) {
//		return ERROR;
//	}
//	*e = S->data[S->top];
//	S->top--;
//	return OK;
//}
//
////插入元素e为新的栈顶元素
//Status Push(SqDoubleStack *S, SElemType e, int stackNumPer) {
//	if (S->top1 + 1 == S->top2) { //栈已满，不能再push新元素了
//		return ERROR;
//	}
//	if (stackNumPer == 1) {  //栈l有元素进栈
//		S->data[++S->top1] = e;	// 若栈1，则先top1+1后给数组元素赋值
//	} else if (stackNumPer == 2) {  //栈2有元余素进栈
//		S->data[--S->top2] = e;	//若栈2则先top2-1后给数组元素赋值
//	}
//	return OK;
//}
//
////若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
//Status Pop(SqDoubleStack *S, SElemType e, int stackNumPer) {
//	if (stackNumPer == 1) {
//		if (S->top1 == -1)
//			return ERROR; //说明栈1已经是空栈，溢出
//		*e = S->data[S->top1--];	//将栈1的栈顶元拿出栈
//	} else if (stackNumPer == 2) {
//		if (S->top2 == MAXSIZE)
//			return ERROR;	//说明栈2已经是空栈，溢出
//		*e = S->data[S->top2++];	//将栈2的栈顶元拿出栈
//	}
//	return OK;
//}

//链栈结构定义
typedef struct StackNode {
	SElemType data;
	struct StackNode *next;
} StackNode, *LinkStackPtr;
typedef struct LinkStack {
	LinkStackPtr top;
	int count;
} LinkStack;

//链栈的push操作
Status Push(LinkStack *S, SElemType e) {
	LinkStackPtr sn = (LinkStackPtr) malloc(sizeof(StackNode));	//构建一个新链栈结点
	sn->data = e;	//新结点data赋值
	sn->next = S->top;  //新结点next赋值，把当前栈顶元素给新结点的直接后继
	S->top = sn;  // 将新的结点sn赋值给栈顶指针
	S->count++;
	return OK;
}

//链栈的出栈操作
Status Pop(LinkStack *S, SElemType e) {
//	if(StackEmpty (*S)){
//		return ERROR;
//	}
	LinkStackPtr p;
	p=S->top;
	S->top=S->top->next;
	free(p);
	S->count--;
	return OK;
}
