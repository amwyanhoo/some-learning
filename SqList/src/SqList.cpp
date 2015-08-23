#include <iostream>
using namespace std;

#define  MAXSIZE 20  //存储空间初始分配量
typedef  int  ElemType; //typedef作用 ：定义一种类型的别名
typedef struct{
	ElemType  data[MAXSIZE];  //数组存储数据元素，最大值为MAXS1ZE
	int  length;
}SqList;
//SqList;

/*ADT 线性"'(List)
	Data
	线性在的数据对~集合为{al' 句，...._，-an).每个元素的.爱均为DataType..其中.,...
	-个元素向外.每一个元余有且只有一个J且在矗前.元余."'7录后一个元司t-an外• *-个元，
	余有且只有-个皇格后罐元索。 ...元余之1司的关系是一对一的关系。
	operation
		InitList(*L):初始化操作，建立-个空的线性表L。
		List Empty(L):若线性表为空，返回true. 否则返回false
		ClearList(*L):将线性表清空.
		GetElem(L,i,*e):将线性表L中的第i个位置元素返回给e。
		LocateElem(L,e):在线性表L中查找与给定值e相等的元素，如果查找成功，返回
		该元素在表中的序号表示成功;否则返回0表示失败。
		Listlnsert(*L,i,e):在线性表L中的第i个位置输入新元素e
		ListDelete(*L，i，*e) :删除线性表L中第i个位置元素，并用e返回其值。
		ListLength(L):返回线性表L的元素个数。
endADT
*/

#define OK  1
#define ERROR  0
#define TRUE  1
#define FALSE  0
typedef int  Status ;
/*Status是函数的类型.其值是函数结果状态代码，如OK等
初始条件:顺序线性表L已存在，l<i<=ListLength(L)
操作结果:用e返回L中第i个数据元素的值*/

Status GetElem(SqList L,int i,ElemType *e){
	if(L.length==0||i<1||i>L.length){
		return ERROR;
	}
	*e=L.data[i-1];
	return OK;
}

Status ListInsert(SqList *L,int i,ElemType e){
	int k;
	if(L->length==MAXSIZE){
		return ERROR;
	}
	if(i<1||i>L->length+1){
		return ERROR;
	}
	if(i<L->length){
		for(k=L->length-1;k>=i-1;k--)
			L->data[k+1]=L->data[k];//一定要从箭头处开始，不然像下面的代码就要出现值覆盖。
		//-->由于原值是向后移动，所以从最后一个元素开始赋值。当删除操作时就要反着来。

//		for(int j=i;j<=L.length;j++){
//			L.data[j]=L.data[j-1];
//		}
	}
	L->data[i-1]=e;
	L->length++;
	return OK;
}

Status ListDete(SqList *L,int i){
	if(i<1||i>L->length||L->length==0){
		return ERROR;
	}else {
		for(int j=i-1;j<L->length-1;j++){
			L->data[j]=L->data[j+1];
		}
		L->length--;
		return OK;
	}
}

int main(){
	SqList sq={{0,1,2},3};
	cout<<ListInsert(&sq,2,5)<<endl;
	cout<<ListDete(&sq,4)<<endl;
}
