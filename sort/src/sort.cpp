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
//正宗冒泡排序算法
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
//经过优化的冒泡排序算法
void BubbleSort2(SqList *L){
	int  i, j;
	bool flag = true;
	for (i = 1; i < L->length&&flag; i++){
		flag = false;
		for (j = L->length - 1; j >= i; j--){
			if (L->r[j] > L->r[j + 1]){
				Swap(L, j, j + 1);
				flag = true;	//如果有数据交换，则置flag为true
			}
		}
	}
}

//简单排序算法
/*	先声明一个存放最小值的变量min
	外循环i
	将min赋值为i
	内循环j,从i后一位开始，递增到最后
	完成功能为找出i及其之后的最小者，记录其位置在min中
	跳出循环

	如果最小值不是第i位，则调换i与min所在位置的元素。
	*/
void SelectSort(SqList  *L){
	int i, j, min;
	for (i = 1; i < L->length; i++){
		min = i;//姑且认为最小者是第i个
		for (j = i + 1; j < L->length; j++){
			if (L->r[min]>L->r[j])//内循环找出外循环i及其之后元素的最小者
				min = j;//并放在min变量中
		}
		if (i != min)//说明i不是最小都
			Swap(L, i, min);
	}
}

//直接插入排序
/*//i从第2位递增至最后
//如果后面(第i位)的比前面的小
//将哨兵位填充为较小者
//j从i前一位开始递减,执行条件：当前j位比现哨兵位大(循环与前面的每一个比较)
//调换，将第j位的大者移到当前i处
//结束内循环，将哨兵位的最小都放在j+1处*/
void InsertSort(SqList *L){
	int i, j;
	for (i = 2; i < L->length; i++){//i从第2位递增至最后
		if (L->r[i] < L->r[i - 1]){//如果后面的比前面的小
			L->r[0] = L->r[i];//将哨兵位填充为较小者
			for (j = i - 1; L->r[j] > L->r[0]; j--){//j从i前一位开始递减,执行条件：比现哨兵位大
				L->r[j + 1] = L->r[j];//调换，将第i位的大者往后移
			}
			L->r[j + 1] = L->r[0];//结束内循环，将哨兵位的最小都放在j+1处
		}
	}
}

//希尔排序

//do while循环
//定义增量increment
//如果后半断比前半断小，则两者进行调换
//借助哨兵位存后边较上值
//j从前半断（i所在位置的前一段）
//相应位置开始，执行完后j跳到再前一段，执行条件：j>0且哨兵位比当前j位小
//当前j所对应下一段相应位置放较大者
//完成调换
void Shellsort(SqList *L){
	int i, j;
	int increament = L->length;
	do{
		increament = increament / 3 + 1;
		for (i = increament + 1; i <= L->length; i++){
			if(L->r[i] < L->r[i - increament]){//如果后半断比前半断小，则两者进行调换
				L->r[0] = L->r[i];//借助哨兵位存后边较上值
				for (j = i - increament; j > 0 && L->r[0] < L->r[j]; j -= increament)//j从前半断（i所在位置的前一段）相应位置开始，执行完后j跳到再前一段，执行条件：j>0且哨兵位比当前j位小
					L->r[j + increament] = L->r[j];//当前j所对应下一段相应位置放较大者
				L->r[j + increament] = L->r[0];//完成调换
			}
		}
	} while (increament > 1);//循环完之后会将当前increment与1比较，然后进入do，会改变increment值，当最后increment为1时也会执行，然后才会跳出do while循环
}

//对顺序表进行堆排序
void HeapSort(SqList *L){
	void HeapAdjust(SqList *L, int s, int m);
	int i;
	for (i = L->length / 2; i > 0; i--)//i从有孩子的结点（即长度的一半）开始递减至0，
		HeapAdjust(L, i, L->length);//构建大顶堆
	for (i = L->length; i > 1; i--){//排序时，循环从最后边开始递减至第二个
		Swap(L, 1, i);//将最后一个与根交换，完成时将当前根所存最大值抛到i之后，不再管了
		HeapAdjust(L, 1, i - 1);//寻找剩下的最大者，放至根处
	}
}

//堆调整
void HeapAdjust(SqList *L, int s, int m){
	int temp, j;
	temp = L->r[s];//设置tmp为当前双亲结点
	for (j = 2 * s; j <= m; j *= 2){//内循环从双亲结点的左孩子开始至结束，遍历其孩子中较大的左孩子（所以步长是j*=2）
	if (j < m&&L->r[j] < L->r[j + 1])//寻找孩子中较大者，并将j设为其下标，
			++j;
		if (temp >= L->r[j])//如果双亲已经比其左右孩子大了，什么都不做
			break;
		L->r[s] = L->r[j];//双亲结点与三者（双亲与其俩孩子）最大的调换
		s = j;//为了第二次以及之后的循环准备，双亲结点下移
		L->r[j] = temp;
	}
	//L->r[s] = temp;//完成最终调换，这里用
}

//大顶堆构建合起来的代码，助于理解
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

//快速排序
void Qsort(SqList *L, int low, int high);
void QuickSort(SqList *L){
	Qsort(L, 1, L->length);
}

int Partion(SqList *L, int low, int high);
void Qsort(SqList *L, int low, int high){
	int pivot;
	if (low < high){
		pivot = Partion(L, low, high);//找到中枢位置
		Qsort(L, low, pivot - 1);//先排左半部分，
		Qsort(L, pivot + 1, high);//后排右半部分,两句话的顺序为前前后，后前后（前序遍历）
	}
}

int Partion(SqList *L, int low, int high){
	int pivotkey;//枢柚变量
	pivotkey = L->r[low];
	while (low<high){
		while (low<high&&L->r[high]>=pivotkey){//找到小于枢柚变量的值下标
			high--;
		}
		Swap(L, low, high);//由于high的值小于小于枢柚变量，交换低高
		while (low < high&&L->r[low] <= pivotkey)//在前端找到大于等于枢柚变量的值的下标
			low++;
		Swap(L, low, high);
	}
	return low;//此时,low=high
}

//归并排序
/*
传递索引来的容易些：
传：数组（要修改），左数组索引，中间位（一般是左数组索引+右数组索引之和除以2），右数组索引
计算左数组长度n1,右数组长度n2；
开辟俩数组空间，分别装左数组，右数组，好写！
循环判断最小者，依次存入形参数组里（结束条件：某边数组索引走完）
将剩余边数组剩下的（肯定是最大值）依次存入形参数组里
*/
void Merge(int* data,int begin,int mid,int end){
	int lenofleft=mid-begin+1;//左数组长度
	int lenofright=end-mid;//右数组长度
	int i,j;
	int* left=(int*)malloc(sizeof(int)*lenofleft);//辅助数组，单独装左数组，以便进行操作，
	int* right=(int*)malloc(sizeof(int)*lenofright);//单独装右数组，
	for(i=0;i<lenofleft;i++){//对左数组赋值
		left[i]=data[begin+i];//一定要从begin开始，因为begin有可能不是0
	}
	for(j=0;j<lenofright;j++){//对右数组赋值
		right[j]=data[mid+j+1];
	}
	i=j=0;
	int k=begin;
	while(i<lenofleft&&j<lenofright){//将数组元素值两两比较，并合并到data数组（小的那一边索引指向下一位，直到某个索引走完）
		if(left[i]<right[j])
			data[k++]=left[i++];
		else
			data[k++]=right[j++];
	}
	for(;i<lenofleft;){//如果左数组有元素剩余，则将剩余元素合并到data数组 ，记住，要用循环，而不要用判断，因为不止剩余一个啊！
		data[k++]=left[i++];
	}
	for(;j<lenofright;) //如果右数组有元素剩余，则将剩余元素合并到data数组
		data[k++]=right[j++];
}

void Msort(int* data,int begin,int end){
	int mid;
	if(begin<end){
		mid=(begin+end)/2;
		Msort(data,begin,mid);//类似于先序遍历
		Msort(data,mid+1,end);
		Merge(data,begin,mid,end);
	}
}

int main(){
	SqList L = { { 0, 50,10,90,30,70,40,80,60,20}, 9 };
	MergeSort(&L);


	return 0;
}

