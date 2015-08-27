#include <iostream>
#include <stdio.h>
using namespace std;

 //������
struct node{//������Ķ���
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


 //���������������߱���
 void output(struct node *L){
	 node *p;//����ָ�룬Ϊ���ǽ�ͷ�ڵ�ȥ����
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
         //����N���ڵ㣬firstNodeָ�����ĵ�N���ڵ�
         i++;
         firstNode = firstNode->next;
         printf("%d\n", i);
     }
     if (firstNode->next == NULL && i < n - 1)
     {
         //���ڵ���������N��ʱ������NULL
         printf("����������\n");
     }
     node* secNode = L;
     while (firstNode != NULL)
     {
         //���ҵ�����N��Ԫ��
         secNode = secNode->next;
         firstNode = firstNode->next;
         //printf("secNode:%d\n", secNode->data);
         //printf("firstNode:%d\n", firstNode->data);
     }
     *e = secNode->data;
 }

//Ѱ�ҵ�n��Ԫ�أ�
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
	//�������
	node *head, *p;
	head = new node();
	head->data = 0;
	p = head;
	for (int i = 1; i < 5; ++i) {
		p->next = new node();//���ٿռ䣬������հ׽ڵ�
		p = p->next;//����ָ�룬ָ���½�
		p->data = i;
	}
	p->next = 0;
	output(head);//�ı�head�����ַ��װ��ֵ��head��ֵ��һ����ַ��
	head = Reverse(head);
//	output(head);
	int e;
//	GetNthNodeFromBack(head,2,&e);

	findn(head,2,&e);
	cout<<e<<endl;


 return 0;
 }
