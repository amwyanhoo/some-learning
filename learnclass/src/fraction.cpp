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

//计算两个数的公约数
/*
（2）辗转相除法．
当两个数都较大时,采用辗转相除法比较方便．其方法是：
以小数除大数,如果能整除,那么小数就是所求的最大公约数．
否则就用余数来除刚才的除数；再用这新除法的余数去除刚才的
余数．依此类推,直到一个除法能够整除,这时作为除数的数就是所求的最大公约数．
例如：求4453和5767的最大公约数时,可作如下除法．
5767÷4453＝1余1314
4453÷1314＝3余511
1314÷511＝2余292
511÷292＝1余219
292÷219＝1余73
219÷73＝3
于是得知,5767和4453的最大公约数是73．
 * */
int Fraction::divisor(int p,int q){
	int tmp1,c;
	if(p<q){//保证p一定大于q
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
