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
	cout<<"这是一个圆，";
}

void Circle::showkey(){
	cout<<"其圆心为";
	Point::showkey();
	cout<<"半径为"<<r<<endl;
}
