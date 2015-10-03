#include <iostream>
#include <cstring>
using namespace std;
//用c++写一个函数，如Foo(const char *str)，打印出str的全排列，如abc的全排列：abc, acb, bca, dac, cab,cba
/*
 *bc时，循环体内，第1次，b与b换(begin与i)，找c组合（递归结束）
			      第2次，b与c交换（begin与i），找begin+1组合（递归结束）

abc时，循环体内，第1次，begin与i交换（a与a），找bc组合，展开以上动作！之后回归原数组
   	   	   	    第2次，begin与i=1交换，……
 * */
void swap(char *str,int begin,int i){
	char tmp=*(str+begin);
	*(str+begin)=*(str+i);
	*(str+i)=tmp;
}
bool isdo(char *str,int pbegin,int pend){
	int p;
	for(p=pbegin;p<pend;p++){
		if(str[p]==str[pend])
			return false;
	}
	return true;
}
void allrange(char* str,int begin){
	if(!str[begin+1]){
		cout<<str<<endl;
	}else{
		for(unsigned int i=begin;i<strlen(str);i++){
			if(isdo(str,begin,i)){
				swap(str,begin,i);
				allrange(str,begin+1);
				swap(str,begin,i);
			}
		}
	}
}

int main(){
	char a[]="abb";
	allrange(a,0);

	return 0;
}
