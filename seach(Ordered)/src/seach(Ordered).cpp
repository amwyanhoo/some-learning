

#include <iostream>
using namespace std;

////折半查找
//int Binary_Seach(int *a, int n, int key){
//	int low, high, mid;
//	low = 1;
//	high = n;//三个指标，低指标从头开始，高指标从尾开始，中间指标为一半，
//	while (low <=high){
//		mid = (low + high) / 2;
//		if (key < a[mid]){
//			high = mid - 1;//将key始终放在低指标与高指标中间，并缩小距离
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

//斐波那契查找
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
				return  mid;// 食荤相等则说明mid即为查找到的位置* /
			else
				return  n;// 禽 蛊~mid>n说明是补会.佳，返回n 叮
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

