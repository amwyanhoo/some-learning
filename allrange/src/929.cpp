#include <iostream>
#include <cstring>
using namespace std;
//��c++дһ����������Foo(const char *str)����ӡ��str��ȫ���У���abc��ȫ���У�abc, acb, bca, dac, cab,cba
/*
 *bcʱ��ѭ�����ڣ���1�Σ�b��b��(begin��i)����c��ϣ��ݹ������
			      ��2�Σ�b��c������begin��i������begin+1��ϣ��ݹ������

abcʱ��ѭ�����ڣ���1�Σ�begin��i������a��a������bc��ϣ�չ�����϶�����֮��ع�ԭ����
   	   	   	    ��2�Σ�begin��i=1����������
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
