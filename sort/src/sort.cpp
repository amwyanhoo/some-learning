//// 922.cpp : Defines the entry point for the console application.
////
//
#include "stdafx.h"
//
//
///*��N�����Ȳ��������飬Ҫ���������Ԫ�ص���ϣ�
//���磺����1����a,b����Ԫ�أ�����2����c,d,e����Ԫ�أ�
//�����ac,ad,ae,bc,bd,be*/
//
//
//
///*���ݵ��ʷ�ת�ַ��������Ǽ򵥵��ַ�����ת�����ǰ��ո������ַ�����ĵ���
//���ַ�����ת����������˵�ַ�������ĵ��ʻ��Ǳ���ԭ����˳�������ÿ������
//�ÿո�ֿ������磺 Here is www.58.com,������ת���Ϊ�� www.58.com is Here*/
//
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//using namespace std;
//
////char* reverse_word(char* str)
////{
////	int len = strlen(str);
////	cout << "len=" << len << endl;
////	char* restr = (char *)malloc(sizeof(char)*(len + 1));
////	strcpy(restr, str);
////	restr = str;
////	cout << restr << endl;
////	int i, j;
////	for (i = 0, j = len - 1; i<j; i++, j--)//��ת�ַ����ı�׼����
////	{
////		char temp = restr[i];
////		restr[i] = restr[j];
////		restr[j] = temp;
////	}
////	cout << restr << endl;
////	int k = 0;
////	while (restr[k] != '\0')
////	{
////		i = j = k;
////		while (restr[j] != ' '&&restr[j] !='\0')
////			j++;
////		k = j + 1;
////		j--;
////		for (; i<j; i++, j--)//��һ���ո�֮ǰ��ת��������ĸ�ٽ��з�ת���Ϳ��Եõ�ԭ����
////		{
////			char temp = restr[i];
////			restr[i] = restr[j];
////			restr[j] = temp;
////		}
////	}
////
////	cout << restr << endl;
////	free(restr);
////	return restr;
////}
////
////int _tmain(int argc, _TCHAR* argv[])
////{
////	char* str = "Here is www.58.com";
////	char* rstr = reverse_word(str);
////	return 0;
////}
//
///**
//ԭ��: 111225555
//ѹ���� : 312245
//ԭ�� : 333AAAbbbb
//ѹ���� : 333A4b
//ԭ�� : ASXDCdddddd
//ѹ���� : 1A1S1X1D1C6d
//Press any key to continue*/
//
//
//
////char *CompressStr(char s[]) {
////	char t[255];
////	int i = 0, j, k = 0;
////	while (s[i]) {
////		j = i + 1;
////		while (s[i] == s[j])
////			++j;
////		t[k++] = s[i];
////		t[k++] = j - i + '0';
////		i = j;
////	}
////	t[k] = '\0';
////	strcpy(s, t);
////	return s;
////}
//
//ListNode* traverse(ListNode* head, int &len, bool &circled){
//	ListNode* p1 = head->next, *p2 = head->next;
//	int step = 1;
//	for (; p2 != NULL; ++step, p1 = p1->next, p2 = p2->next){
//		p2 = p2->next;
//		++step;
//		if (!p2 || p1 == p2)
//			break;
//	}
//	if (!p2){    //�޻�
//		len = step;    //��len��¼������
//		circled = false;
//		return NULL;
//	}
//	else{//�л�
//		circled = true;
//		len = 0; //��len��¼ͷ��㵽����ھ���
//		for (p1 = head; p1 != p2; p1 = p1->next, p2 = p2->next, ++len);
//		return p1;
//	}
//}
//
//ListNode* FindFirstCommonListNode(ListNode* head1, ListNode* head2){
//	if (!head1 || !head2) return NULL;
//	if (head1 == head2) return head1;
//	int len1 = 0, len2 = 0; bool cc1 = false, cc2 = false;
//	ListNode* CcleEnt1 = traverse(head1, len1, cc1);
//	ListNode* CcleEnt2 = traverse(head2, len2, cc2);
//
//	if ((!cc1 && cc2) || (cc1 && !cc2))
//		return NULL;    //��һ���л���һ���޻�����϶�û�н���
//	if (len1 > 0 && len2 > 0){    //���������޻������߶��л����׽ڵ㶼���ڻ���ʱ
//		ListNode *st1 = (len1 > len2 ? head1 : head2);
//		ListNode *st2 = (len1 > len2 ? head2 : head1);
//		ListNode *cce1 = (len1 > len2 ? CcleEnt1 : CcleEnt2);
//		ListNode *cce2 = (len1 > len2 ? CcleEnt2 : CcleEnt1);
//		for (int i = 0; i < (len1 - len2 > 0 ? len1 - len2 : len2 - len1); ++i, st1 = st1->next);
//		for (; st1 != cce1 && st2 != cce2 && (st1 != st2); st1 = st1->next, st2 = st2->next);
//		if (st1)
//			return st1;
//		return NULL;
//	}
//	else{    //len1, len2 ����һ��Ϊ0 ˵������������һ�������Ǵ�������
//		ListNode *st1 = (len1 == 0 ? head1 : head2); //ѡ���Ǹ����������head����֤���Ƿ�����һ������Ļ��ϣ��ڵĻ������ǵ�һ�����㣬���ڵĻ���û�н��㡣
//		ListNode *st2 = (len1 == 0 ? head2 : head1);
//		ListNode *p = st2->next;
//		for (; p != st2 && p != st1; p = p->next);
//		if (p == st1)
//			return st1;
//		return NULL;
//	}
//}
//
//
//NODE* FindNode(NODE* pHead1, NODE* pHead2)
//{
//	NODE* p1 = pHead1;
//	NODE* p2 = pHead2;
//	int i = 1, j = 1, k = 0, f = 0;
//
//	if (pHead2 == NULL || pHead2 == NULL)
//	{
//		return NULL;
//	}
//
//	while (p1->next != NULL)
//	{
//		p1 = p1->next;
//		i++;
//	}
//
//	while (p2->next != NULL)
//	{
//		p2 = p2->next;
//		j++;
//	}
//
//	if (p1 != p2)
//	{
//		return NULL;
//	}
//	else
//	{
//		p1 = pHead1; // 1
//		p2 = pHead2;
//
//		f = fabs(i, j);
//		if (i > j) // 2
//		{
//			for (k = 0; k << / SPAN>f; k++)
//			{
//				p1 = p1->next;
//			}
//			while (p1 != p2)
//			{
//				p1 = p1->next;
//				p2 = p2->next;
//			}
//			return p1;
//		}
//		else
//		{
//			for (k = 0; k << / SPAN>f; k++)
//			{
//				p2 = p2->next;
//			}
//			while (p1 != p2)
//			{
//				p1 = p1->next;
//				p2 = p2->next;
//			}
//			return p1;
//		}
//	}
//}
//
//
//int main(void) {
//	char i, s[][20] = { "111225555", "333AAAbbbb", "ASXDCdddddd" };
//	for (i = 0; i < 3; ++i) {
//		printf("ԭ��: %s\n", s[i]);
//		printf("ѹ����: %s\n", CompressStr(s[i]));
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
//typedef struct Llist{
//	int data;
//	struct Llist *next;
//}Llist;
////void ListDelete(Llist *L, Llist *q){
////	Llist *p = L->next, *tmp=q;
////	while (p->next != q&&p)
////		p = p->next;
////	p->next = q->next;
////	//free(tmp);
////}

//int cmp_version(const char* v1, const char* v2)
//{
//	int a[3] = { 0 };
//	int x[3] = { 0 };
//
//	sscanf(v1, "%d.%d.%d", &a[0], &a[1], &a[2]);
//	sscanf(v2, "%d.%d.%d", &x[0], &x[1], &x[2]);
//
//	int i = 0, n = 0;
//	for (i = 0; i < 3; i++) {
//		if ((n = (a[i] - x[i])) != 0)
//			return n;
//	}
//	return 0;
//}

// �ҳ������г��ִ�������һ���Ԫ��
//int MajorityElement(int *a, int n)
//{
//	int k, i;
//	int elem;
//
//	k = 1;
//	elem = a[0];
//	for (i = 1; i <n; i++){
//		if (a[i] == elem){
//			k++;
//		}
//		else{
//			k--;
//			if (k == 0) {
//				k = 1;
//				elem = a[i];
//			}
//		}
//	}

//int main(){
/*Llist head, L1, L2, L3, L4;
head = { 0, &L1 };
L1 = { 1, &L2 };
L2 = { 2, &L3 };
L3 = { 3, &L4 };
L4 = { 4, NULL };
Llist L = head;
ListDelete(&L, &L3);*/

/*char a[] = "0.1.9";
char b[] = "13.37.9";
cmp_version(a, b);*/
//
/*int a[] = { 1, 2,3, 1, 1 };
MajorityElement(a, sizeof(a) / sizeof(a[0]));
return 0;
}*/

#include <iostream>
using namespace std;

int MajorityElement(int *a, int n){
	int k, i;
	int elem;
	k = 1;
	elem = a[0];
	for (i = 1; i < n; i++){
		if (a[i] == elem){
			k++;
		}
		else{
			k--;
			if (k == 0) {
				k = 1;
				elem = a[i];
			}
		}
	}
	//  cout << k << endl;
	return elem;
}
int main(int argc, char* argv[])
{
	int a[] = { 2, 3, 2, 2, 2, 3, 2, 4, 2, 3};
	cout << "��Ԫ���ǣ�" << MajorityElement(a, sizeof(a) / sizeof(a[0])) << endl;
	return 0;
}
