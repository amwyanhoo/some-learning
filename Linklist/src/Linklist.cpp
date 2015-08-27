#include <iostream>
#include <stdio.h>
using namespace std;

 //链表反序
struct node{//单链表的定义
	int data;
	struct node *next;
};


// struct node* Reverse(struct node *p){
//	node *p1, *p2;
//	if (!p)
//		return 0;
//	p1 = p->next;
//	if (!p1)
//		return p;
//	p2 = p1->next;
//	p->next = 0;
//	while (true) {
//		p1->next = p;
//		p = p1;
//		p1 = p2;
//		if (!p2)
//			break;
//		p2 = p2->next;
//	}
//	return p;
//}


struct node* Reverse(struct node *L){
	struct node* current, *p;
	if (L == NULL)	{
		return NULL;
	}
	current = L->next;
	while (current->next != NULL){
		p = current->next;
		current->next = p->next;
		p->next = L->next;
		L->next = p;
	}
	return L;
}


 //单链表的输出，或者遍历
 void output(struct node *L){
	 node *p;//工作指针，为的是将头节点去掉。
	 p=L->next;
	while (p) {
		cout << p->data << "->";
		p = p->next;
	}
	cout << endl;
}

 void GetNthNodeFromBack(node* L, int n, int *e)
 {
     int i = 0;
     node* firstNode = L;
     while (i < n && firstNode->next != NULL)
     {
         //正数N个节点，firstNode指向正的第N个节点
         i++;
         firstNode = firstNode->next;
         printf("%d\n", i);
     }
     if (firstNode->next == NULL && i < n - 1)
     {
         //当节点数量少于N个时，返回NULL
         printf("超出链表长度\n");
     }
     node* secNode = L;
     while (firstNode != NULL)
     {
         //查找倒数第N个元素
         secNode = secNode->next;
         firstNode = firstNode->next;
         //printf("secNode:%d\n", secNode->data);
         //printf("firstNode:%d\n", firstNode->data);
     }
     *e = secNode->data;
 }

//寻找第n个元素，
 void findn(node* L,int n,int *e){
	node *p;
	p=L->next;
	int i=1;
	 while(i<n&&p!=NULL){
		 p=p->next;
		 i++;
	 }
	 (*e)=p->data;
 }

 int main() {
	//添加链表
	node *head, *p;
	head = new node();
	head->data = 0;
	p = head;
	for (int i = 1; i < 5; ++i) {
		p->next = new node();//开辟空间，即创造空白节点
		p = p->next;//工作指针，指针下降
		p->data = i;
	}
	p->next = 0;
	output(head);//改变head所存地址里装的值（head的值是一个地址）
	head = Reverse(head);
//	output(head);
	int e;
//	GetNthNodeFromBack(head,2,&e);

	findn(head,2,&e);
	cout<<e<<endl;


 return 0;
 }
