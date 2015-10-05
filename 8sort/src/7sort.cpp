#include <iostream>
using namespace std;
#define	MAXSIZE 10
typedef struct{
	int r[MAXSIZE];
	int length;
}SqList;

void Swap(SqList *L, int i, int j){
	int tmp;
	tmp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = tmp;
}
//����ð�������㷨
void BubbleSort(SqList *L){
	int  i, j;
	for (i = 0; i < L->length; i++){
		for (j = L->length - 1; j >= i; j--){
			if (L->r[j] > L->r[j + 1]){
				Swap(L, j, j + 1);
			}
		}
	}
}
//�����Ż���ð�������㷨
void BubbleSort2(SqList *L){
	int  i, j;
	bool flag = true;
	for (i = 1; i < L->length&&flag; i++){
		flag = false;
		for (j = L->length - 1; j >= i; j--){
			if (L->r[j] > L->r[j + 1]){
				Swap(L, j, j + 1);
				flag = true;	//��������ݽ���������flagΪtrue
			}
		}
	}
}

//�������㷨
/*	������һ�������Сֵ�ı���min
	��ѭ��i
	��min��ֵΪi
	��ѭ��j,��i��һλ��ʼ�����������
	��ɹ���Ϊ�ҳ�i����֮�����С�ߣ���¼��λ����min��
	����ѭ��

	�����Сֵ���ǵ�iλ�������i��min����λ�õ�Ԫ�ء�
	*/
void SelectSort(SqList  *L){
	int i, j, min;
	for (i = 1; i < L->length; i++){
		min = i;//������Ϊ��С���ǵ�i��
		for (j = i + 1; j < L->length; j++){
			if (L->r[min]>L->r[j])//��ѭ���ҳ���ѭ��i����֮��Ԫ�ص���С��
				min = j;//������min������
		}
		if (i != min)//˵��i������С��
			Swap(L, i, min);
	}
}

//ֱ�Ӳ�������
/*//i�ӵ�2λ���������
//�������(��iλ)�ı�ǰ���С
//���ڱ�λ���Ϊ��С��
//j��iǰһλ��ʼ�ݼ�,ִ����������ǰjλ�����ڱ�λ��(ѭ����ǰ���ÿһ���Ƚ�)
//����������jλ�Ĵ����Ƶ���ǰi��
//������ѭ�������ڱ�λ����С������j+1��*/
void InsertSort(SqList *L){
	int i, j;
	for (i = 2; i < L->length; i++){//i�ӵ�2λ���������
		if (L->r[i] < L->r[i - 1]){//�������ı�ǰ���С
			L->r[0] = L->r[i];//���ڱ�λ���Ϊ��С��
			for (j = i - 1; L->r[j] > L->r[0]; j--){//j��iǰһλ��ʼ�ݼ�,ִ�������������ڱ�λ��
				L->r[j + 1] = L->r[j];//����������iλ�Ĵ���������
			}
			L->r[j + 1] = L->r[0];//������ѭ�������ڱ�λ����С������j+1��
		}
	}
}

//ϣ������

//do whileѭ��
//��������increment
//������ϱ�ǰ���С�������߽��е���
//�����ڱ�λ���߽���ֵ
//j��ǰ��ϣ�i����λ�õ�ǰһ�Σ�
//��Ӧλ�ÿ�ʼ��ִ�����j������ǰһ�Σ�ִ��������j>0���ڱ�λ�ȵ�ǰjλС
//��ǰj����Ӧ��һ����Ӧλ�÷Žϴ���
//��ɵ���
void Shellsort(SqList *L){
	int i, j;
	int increament = L->length;
	do{
		increament = increament / 3 + 1;
		for (i = increament + 1; i <= L->length; i++){
			if(L->r[i] < L->r[i - increament]){//������ϱ�ǰ���С�������߽��е���
				L->r[0] = L->r[i];//�����ڱ�λ���߽���ֵ
				for (j = i - increament; j > 0 && L->r[0] < L->r[j]; j -= increament)//j��ǰ��ϣ�i����λ�õ�ǰһ�Σ���Ӧλ�ÿ�ʼ��ִ�����j������ǰһ�Σ�ִ��������j>0���ڱ�λ�ȵ�ǰjλС
					L->r[j + increament] = L->r[j];//��ǰj����Ӧ��һ����Ӧλ�÷Žϴ���
				L->r[j + increament] = L->r[0];//��ɵ���
			}
		}
	} while (increament > 1);//ѭ����֮��Ὣ��ǰincrement��1�Ƚϣ�Ȼ�����do����ı�incrementֵ�������incrementΪ1ʱҲ��ִ�У�Ȼ��Ż�����do whileѭ��
}

//��˳�����ж�����
void HeapSort(SqList *L){
	void HeapAdjust(SqList *L, int s, int m);
	int i;
	for (i = L->length / 2; i > 0; i--)//i���к��ӵĽ�㣨�����ȵ�һ�룩��ʼ�ݼ���0��
		HeapAdjust(L, i, L->length);//�����󶥶�
	for (i = L->length; i > 1; i--){//����ʱ��ѭ�������߿�ʼ�ݼ����ڶ���
		Swap(L, 1, i);//�����һ��������������ʱ����ǰ���������ֵ�׵�i֮�󣬲��ٹ���
		HeapAdjust(L, 1, i - 1);//Ѱ��ʣ�µ�����ߣ���������
	}
}

//�ѵ���
void HeapAdjust(SqList *L, int s, int m){
	int temp, j;
	temp = L->r[s];//����tmpΪ��ǰ˫�׽��
	for (j = 2 * s; j <= m; j *= 2){//��ѭ����˫�׽������ӿ�ʼ�������������亢���нϴ�����ӣ����Բ�����j*=2��
	if (j < m&&L->r[j] < L->r[j + 1])//Ѱ�Һ����нϴ��ߣ�����j��Ϊ���±꣬
			++j;
		if (temp >= L->r[j])//���˫���Ѿ��������Һ��Ӵ��ˣ�ʲô������
			break;
		L->r[s] = L->r[j];//˫�׽�������ߣ�˫�����������ӣ����ĵ���
		s = j;//Ϊ�˵ڶ����Լ�֮���ѭ��׼����˫�׽������
		L->r[j] = temp;
	}
	//L->r[s] = temp;//������յ�����������
}

//�󶥶ѹ����������Ĵ��룬�������
void HeapSort1(SqList *L){
	for (int i = L->length / 2; i>0; i--){
		int s = i;
		int tmp = L->r[i];
		for (int j = 2 * s; j<L->length; j *= 2){
			if (j<L->length&&L->r[j]<L->r[j + 1]){
				j++;
			}
			if (tmp>L->r[j]){
				break;
			}
			L->r[s] = L->r[j];
			L->r[j] = tmp;
			s = j;
		}
	}
}

//��������
void Qsort(SqList *L, int low, int high);
void QuickSort(SqList *L){
	Qsort(L, 1, L->length);
}

int Partion(SqList *L, int low, int high);
void Qsort(SqList *L, int low, int high){
	int pivot;
	if (low < high){
		pivot = Partion(L, low, high);//�ҵ�����λ��
		Qsort(L, low, pivot - 1);//������벿�֣�
		Qsort(L, pivot + 1, high);//�����Ұ벿��,���仰��˳��Ϊǰǰ�󣬺�ǰ��ǰ�������
	}
}

int Partion(SqList *L, int low, int high){
	int pivotkey;//���ֱ���
	pivotkey = L->r[low];
	while (low<high){
		while (low<high&&L->r[high]>=pivotkey){//�ҵ�С�����ֱ�����ֵ�±�
			high--;
		}
		Swap(L, low, high);//����high��ֵС��С�����ֱ����������͸�
		while (low < high&&L->r[low] <= pivotkey)//��ǰ���ҵ����ڵ������ֱ�����ֵ���±�
			low++;
		Swap(L, low, high);
	}
	return low;//��ʱ,low=high
}

//�鲢����
void MergeSort(SqList *L){
	void MSort(int SR[], int TR1[], int s, int t);
	MSort(L->r, L->r, 1, L->length);
}

void MSort(int SR[], int TR1[], int s, int t){
	void Merge(int SR[], int TR[], int i, int m, int n);
	int m;
	int TR2[MAXSIZE + 1];
	if (s == t)
		TR1[s] = SR[s];
	else{
		m = (s + t) / 2;
		MSort(SR, TR2, s, m);
		MSort(SR, TR2, m + 1, t);
		Merge(TR2, TR1, s, m, t);
	}
}

void Merge(int SR[], int TR[], int i, int m, int n){
	int j, k, l;
	for (j = m + 1, k = i; i <= m&&j <= n; k++){
		if (SR[i] < SR[j])
			TR[k] = SR[i++];
		else
			TR[k] = SR[j++];
	}
	if (i <= m){
		for (l = 0; l <= m; l++)
			TR[k + l] = SR[i +l];
	}
	if (i <= n){
		for (l = 0; l <= n - j; l++)
			TR[k + l] = SR[+l];
	}
}
int tmain(){
	SqList L = { { 0, 50,10,90,30,70,40,80,60,20}, 9 };
	MergeSort(&L);


	return 0;
}

