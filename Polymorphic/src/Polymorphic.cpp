#include <iostream>
#include <cstring>
#include <iomanip>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
using namespace std;


//虚函数
//class Mobile{
//public:
//	char mynumber[11];
//	virtual void showtd(){
//		cout<<"_______unclear_________"<<endl;
//	}
//};
//
//class MobileGsm:public Mobile{
//public :
////	int memory;
//	void showtd(){
//		cout<<"手机制式是GSM"<<endl;
//	}
//};
//
//class MobileCdma:public Mobile{
//public :
////	int memory;
//	void showtd(){
//		cout<<"手机制式是CDMA"<<endl;
//	}
//};
//
//int main(){
//	Mobile m,*p1;
//	MobileGsm gsm;
//	MobileCdma cdma;
//
////	m.showtd();
////	gsm.showtd();
////	cdma.showtd();
//
////	m=gsm;
////	m.showtd();
//
//	p1=&gsm;
//	(*p1).showtd();
//}

//抽象类
//class Shape{
//public:
//	virtual double area()=0;
//	virtual double circumference()=0;
//};
//
//class Rectangle: public Shape{
//	double x,y;
//	double width,heigth;
//public:
//	Rectangle(double x,double y,double width,double heigth){
//		this->x=x;
//		this->y=y;
//		this->width=width;
//		this->heigth=heigth;
//	}
//	double area(){
//		return width*heigth;
//	}
//	double circumference(){
//		return 2*width+2*heigth	;
//	}
//};
//
//class Circle: public Shape{
//	double x,y;
//	double r;
//public:
//	Circle(double x,double y,double r){
//		this->x=x;
//		this->y=y;
//		this->r=r;
//	}
//	double area(){
//		return 3.1415*r*r;
//	}
//	double circumference(){
//		return 2*3.1415*r;
//	}
//};
//
//int main(){
//	Rectangle r(0,0,5,10);
//	Circle c(0,0,3);
//	Shape *p,&q=c;
//	p=&r;
//	cout<<p->area()<<endl;
//	cout<<q.area()<<endl;
//}

//前置++与后置++的重载
//class Time{
//	int minute,second;
//public:
//	Time(int m,int s):minute(m),second(s){//由初始化列表来完成构造函数，类的继承里用过。
//
//	}
//
//
//	Time operator++(){//重载前置++
//		++second;
//		if(second>=60){
//			++minute;
//			second-=60;
//		}
//		return *this;
//	}
//
//	Time operator ++(int){
//		Time t(0,0);
//		t.minute=minute;
//		t.second=second;
//		second++;
//		if(second>=60){
//			minute++;
//			second-=60;
//		}
//		return t;
//	}
//	void show(){
//		cout<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
//	}
//};
//
//int main(){
////	Time t1(30,58);
////	for(int i=0;i<3;i++){
////		++t1;
////		t1.show();
////	}
//
//	Time t4(30,58);
//	(++t4).show();
//
//	Time t5(30, 58);
//	(t5++).show();
//
//	return 0;
//}

//符号[]的重载
//class Word{
//	char *str;
//	int len;
//public:
//	Word(char *s){
//		len=strlen(s);
//		str=new char[len+1];
//		strcpy(this->str,s);
//	}
//
//	~Word(){
//		delete []str;
////		cout<<"Word的析构函数正在执行 "<<str<<" "<<len<<endl;
//	}
//
//	char & operator [](int i){//在Word类中写的重载，故用法为w[i]
//		if(i>=0&&i<len){
//			return *(str+i);//返回类型为char,对应于函数头
//		}else{
//			cout<<"下标越界，返回第一个元素！"<<endl;
//			return *(str);
//		}
//	}
//
//	void display(){
//		cout<<str<<endl;
//	}
//};
//
//int main(){
//	Word w("google");
//	w.display();
//	w[1]='a';//在哪个类中写的符号重载，就用这个类的对象进行操作。
//	cout<<w[0]<<endl;
//	cout<<w[1]<<endl;
//	cout<<w[10]<<endl;
//}

//重载=与+运算符
//class Complex{
//	double real,imag;
//public:
//	Complex(double r=0,double i=0):real(r),imag(i){};
//
//	double getReal(){
//		return real;
//	}
//	double getImag(){
//		return imag;
//	}
//
//	Complex operator +(Complex c){//operator是指类型为Complex的某个对象，操作者，写在操作符左边，由它发起调用。 +(Complex c)意为+上一个类型为Complex的对象c，写在操作符右边
//		Complex co;
//		co.real=real+c.real;
//		co.imag=imag+c.imag;
//		return co;
//	}
//
//	Complex operator +(double d);
//	Complex operator =(Complex);
//
//	void show(){
//		if(imag>0){
//			cout<<real<<"+j"<<imag<<endl;
//		}else if (imag<0) {
//			cout<<real<<"-j"<<(-imag)<<endl;
//		}else{
//			cout<<real<<endl;
//		}
//	}
//};
//
//Complex Complex::operator +(double d){
//	Complex co;
//	co.real=real+d;
//	co.imag=imag;
//	return co;
//}
//
//Complex Complex::operator =(Complex c){
//	real=c.real;
//	imag=c.imag;
//	return *this;
//}
//
//int main(){
//	Complex c1(3,-4),c2(5,6),c3;
////	cout<<"c1=";
////	c1.show();
////	cout<<"c2=";
////	c2.show();
//
//	c3=c1+c2;//
//	cout<<"c3=";
//	c3.show();
//
//	return 0;
//}

int main(){
	Shape *s;
//	Point p(3,4);
	Circle c(3,4,5);
	s=&c;
//	s->show();
	(*s).show();
	s->showkey();

	return 0;
}




