#ifndef Circle_H
#define Circle_H
#include "Point.h"

class Circle: public Point{
	double r;
public:
	Circle(double x,double y,double r);
	void setCircle(double);
	double getr();
	double area();
	void show();
	void showkey();
};

#endif
