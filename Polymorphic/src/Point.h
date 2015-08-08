#ifndef Point_H
#define Point_H
#include "Shape.h"

class Point: public Shape{
	double x,y;
public:
	Point(double=0,double=0);
	void setPoint(double,double);
	double getX(){
		return x;
	}
	double getY(){
		return y;
	}
	void show();
	void showkey();
};

#endif
