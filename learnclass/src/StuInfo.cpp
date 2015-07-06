#include <iostream>
#include <cstring>
#include "StuInfo.h"
using namespace std;

void StuInfo::set(int i,char *q,float p,float n,float d){
	Id=i;
	for(int j=0;j<10;j++){
		name[j]=*q;
		q++;
	}
	prog=p;
	net=n;
	db=d;
	total=p+n+d;
}

void StuInfo::show(){
	cout<<Id<<"\t";
	cout<<name<<"\t";
	cout<<prog<<"\t";
	cout<<net<<"\t";
	cout<<db<<"\t";
	cout<<total<<"\t";
}

void StuInfo::sort(StuInfo *s,int N){
	StuInfo tmp;
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-1-i;j++){
			if(s[j].total<s[j+1].total){
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}
