

#include <iostream>
using namespace std;

////�۰����
//int Binary_Seach(int *a, int n, int key){
//	int low, high, mid;
//	low = 1;
//	high = n;//����ָ�꣬��ָ���ͷ��ʼ����ָ���β��ʼ���м�ָ��Ϊһ�룬
//	while (low <=high){
//		mid = (low + high) / 2;
//		if (key < a[mid]){
//			high = mid - 1;//��keyʼ�շ��ڵ�ָ�����ָ���м䣬����С����
//		}
//		else if(key>a[mid]){
//			low = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return 0;
//}

//쳲���������
int F[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 };
int Fibonacci_Search(int *a, int n, int key){
	int low, high, mid, i, k;
	low = 1;
	high = n;
	k = 0;
	while (n > F[k] - 1)
		k++;
	for (i = n; i < F[k] - 1; i++)
		a[i] = a[n];
	while (low <= high){
		mid = low + F[k - 1] - 1;
		if (key < a[mid]){
			high = mid - 1;
			k = k - 1;
		}
		else if (key > a[mid]){
			low = mid + 1;
			k = k - 2;
		}
		else{
			if (mid <=n)
				return  mid;// ʳ�������˵��mid��Ϊ���ҵ���λ��* /
			else
				return  n;// �� ��~mid>n˵���ǲ���.�ѣ�����n ��
		}
	}
	return  0;
}

int tmain(){
	int a[] = { 0, 1, 16, 24, 35, 47, 59, 62, 73, 88, 99 };
	//int n = sizeof(a) / sizeof(a[0]);
	//cout << Binary_Seach(a, 10, 62);
	cout<<Fibonacci_Search(a, 10, 62);
	return 0;
}

