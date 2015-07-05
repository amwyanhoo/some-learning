#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(){
	a=0;
	b=1;
}

Fraction::Fraction(int a,int b){
	set(a,b);
}

Fraction::Fraction(Fraction &c){
	a=c.a;
	b=c.b;
}

void Fraction::set(int a,int b){
	this->a=a;
	this->b=b;
}

void Fraction::show(){
	cout<<a<<"/"<<b;
}

Fraction Fraction::add(Fraction u){
	//cout<<(a*b.b+b*b.a)<<"/"<<b.b*b<<endl;
	int tmp;
	Fraction v;
	v.a=a*u.b+b*u.a;
	v.b=b*u.b;
	tmp=divisor(v.a,v.b);
	v.a=v.a/tmp;
	v.b=v.b/tmp;
	return v;
}

//�����������Ĺ�Լ��
/*
��2��շת�������
�����������ϴ�ʱ,����շת������ȽϷ��㣮�䷽���ǣ�
��С��������,���������,��ôС��������������Լ����
����������������ղŵĳ������������³���������ȥ���ղŵ�
��������������,ֱ��һ�������ܹ�����,��ʱ��Ϊ��������������������Լ����
���磺��4453��5767�����Լ��ʱ,�������³�����
5767��4453��1��1314
4453��1314��3��511
1314��511��2��292
511��292��1��219
292��219��1��73
219��73��3
���ǵ�֪,5767��4453�����Լ����73��
 * */
int Fraction::divisor(int p,int q){
	int tmp1,c;
	if(p<q){//��֤pһ������q
		tmp1=p;
		p=q;
		q=tmp1;
	}
	c = p % q;
	while(c!=0){
		p=q;
		q=c;
		c=p%q;
	}
	return q;
}
