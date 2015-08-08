#ifndef	Shape_H
#define Shape_H
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

	class Shape{
	public:
		virtual double area()=0;
		virtual void show()=0;
		virtual void showkey()=0;
	};

#endif
