#include "Circle.h"
using namespace std;

Circle::Circle(double x,double y,double r):Point(x,y){
	setCircle(r);
}

void Circle::setCircle(double r){
	this->r=r;
}

double Circle::getr(){
	return r;
}

double Circle::area(){
	return 3.14159*r*r;
}

void Circle::show(){
	cout<<"����һ��Բ��";
}

void Circle::showkey(){
	cout<<"��Բ��Ϊ";
	Point::showkey();
	cout<<"�뾶Ϊ"<<r<<endl;
}
