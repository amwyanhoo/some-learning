#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

//ϰ��7.1
//enum sexal{
//	femal,male
//};
//
//class Dog{
//private:
//	char name[10];
//	int age;
//	sexal sex;
//	float weight;
//
//public:
//	void set(char *n,int a,sexal s,float w);
//	void show();
//	Dog(char *n,int a,sexal s,float w);
//};
//
//void Dog::set(char *n,int a,sexal s,float w){
//	strcpy(this->name,n);
//	age=a;
//	sex=s;
//	weight=w;
//}
//
//Dog::Dog(char *n,int a,sexal s,float w){
//	set(n,a,s,w);
//}
//
//void Dog::show(){
//	cout<<"��������\t"<<name<<endl;
//	cout<<"��������\t"<<age<<endl;
//	cout<<"�����Ա�\t"<<sexal[0]<<endl;
//	cout<<"��������\t"<<weight<<endl;
//}
//int main() {
//	Dog doge("liuxia",27,femal,48.0f);
//	doge.show();
//	return 0;
//}

//ϰ��7.2
class Circle{
private:
	int x1,y1;
	int x2,y2;

public:
	Circle();
	Circle(int x1,int y1,int x2,int y2);
	double area();
	double length();
};

Circle::Circle(){
	x1=0;
	y1=0;
	x2=1;
	y2=1;
}
Circle::Circle(int x1,int y1,int x2,int y2){
	this->x1=x1;
	this->y1=y1;
	this->x2=x2;
	this->y2=y2;
}
double Circle::area(){
	double r;
	r=0.5*(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
	return 3.14*r*r;
}
double Circle::length(){
	double r;
	r = 0.5*(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
	return 2 * 3.14 * r ;
}

int main(){
	Circle c;
	cout<<"Բ������ǣ�"<<c.area()<<endl;
	cout<<"Բ���ܳ��ǣ�"<<c.length();
	return 0;
}
