#include <iostream>
#include <cstring>
using namespace std;
//
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

class Shape{
public:
	virtual double area()=0;
	virtual double circumference()=0;
};

class Rectangle: public Shape{
	double x,y;
	double width,heigth;
public:
	Rectangle(double x,double y,double width,double heigth){
		this->x=x;
		this->y=y;
		this->width=width;
		this->heigth=heigth;
	}
	double area(){
		return width*heigth;
	}
	double circumference(){
		return 2*width+2*heigth	;
	}
};

class Circle: public Shape{
	double x,y;
	double r;
public:
	Circle(double x,double y,double r){
		this->x=x;
		this->y=y;
		this->r=r;
	}
	double area(){
		return 3.1415*r*r;
	}
	double circumference(){
		return 2*3.1415*r;
	}
};

int main(){
	Rectangle r(0,0,5,10);
	Circle c(0,0,3);
	Shape *p,&q=c;
	p=&r;
	cout<<p->area()<<endl;
	cout<<q.area()<<endl;
}
