#include "Point.h"
using namespace std;

Point::Point(double x,double y){
	this->x=x;
	this->y=y;
}

//void Point::setPoint(double x,double y){
//	this->x=x;
//	this->y=y;
//};

void Point::show(){
	cout<<"����һ���㣬������";
}

void Point::showkey(){
	cout<<"("<<x<<","<<y<<")\n";
}
