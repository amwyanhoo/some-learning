#include <iostream>
#include <cstring>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <afxres.h>
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
//class Circle{
//private:
//	int x1,y1;
//	int x2,y2;
//
//public:
//	Circle();
//	Circle(int x1,int y1,int x2,int y2);
//	double area();
//	double length();
//};
//
//Circle::Circle(){
//	x1=0;
//	y1=0;
//	x2=1;
//	y2=1;
//}
//Circle::Circle(int x1,int y1,int x2,int y2){
//	this->x1=x1;
//	this->y1=y1;
//	this->x2=x2;
//	this->y2=y2;
//}
//double Circle::area(){
//	double r;
//	r=0.5*(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//	return 3.14*r*r;
//}
//double Circle::length(){
//	double r;
//	r = 0.5*(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
//	return 2 * 3.14 * r ;
//}
//
//int main(){
//	Circle c;
//	cout<<"Բ������ǣ�"<<c.area()<<endl;
//	cout<<"Բ���ܳ��ǣ�"<<c.length();
//	return 0;
//}
//

//ϰ��7.3
//class Triangle{
//private:
//	double b1,b2,b3;
//
//public:
//	Triangle(double b1,double b2,double b3);
//	bool Istri();
//	double area();
//	bool Isrig();//ֱ��
//	bool IsAcute();//���
//	bool IsObtuse();//�۽�
//};
//
//Triangle::Triangle(double b1,double b2,double b3){
//	this->b1=b1;
//	this->b2=b2;
//	this->b3=b3;
//}
//bool Triangle::Istri(){
//	if(b1+b2>b3&&b1+b3>b2&&b2+b3>b1){
//		return true;
//	}else{
//		return false;
//	}
//}
//
//double Triangle::area(){
//	double p;
//	p=0.5*(b1+b2+b3);
//	return	sqrt(p*(p-b1)*(p-b2)*(p-b3));
//}
//
//bool Triangle::IsAcute(){
//	double a,b,c;
//	a=(b1*b1+b2*b2-b3*b3)/(2*b1*b2);
//	b=(b1*b1+b3*b3-b2*b2)/(2*b1*b3);
//	c=(b2*b2+b3*b3-b1*b1)/(2*b2*b3);
//	if(a>0&&b>0&&c>0){
//		return true;
//	}else{
//		return false;
//	}
//}
//bool Triangle::Isrig(){
//	double a,b,c;
//	a=(b1*b1+b2*b2-b3*b3)/(2*b1*b2);
//	b=(b1*b1+b3*b3-b2*b2)/(2*b1*b3);
//	c=(b2*b2+b3*b3-b1*b1)/(2*b2*b3);
//	if(a==0||b==0||c==0){
//		return true;
//	}else{
//		return false;
//	}
//}
//bool Triangle::IsObtuse(){
//	double a,b,c;
//	a=(b1*b1+b2*b2-b3*b3)/(2*b1*b2);
//	b=(b1*b1+b3*b3-b2*b2)/(2*b1*b3);
//	c=(b2*b2+b3*b3-b1*b1)/(2*b2*b3);
//	if(a<0||b<0||c<0){
//		return true;
//	}else{
//		return false;
//	}
//}
//
//int main(){
//	Triangle tri1(1,4,5);
//	if (tri1.Istri()) {
//		if (tri1.IsAcute()) {
//			cout << "�������������������\n";
//		}
//		if (tri1.IsObtuse()) {
//			cout << "���������Ƕ۽�������\n";
//		}
//		if (tri1.Isrig()) {
//			cout << "����������ֱ��������\n";
//		}
//		cout << "������������ǣ�" << tri1.area();
//	}else{
//		cout<<"������ֱ�߲��ܹ���������";
//	}
//	return 0;
//}

//ϰ��7.4
//class Address{
//private:
//	char name[20];
//	char street[20];
//	char city[20];
//	int code;
//
//public:
//	Address();
//	Address(char *n,char *s,char *c,int co);
//	void Changename(char *n);
//	void Display();
//};
//
//Address::Address(){
//	strcpy(name,"shannxi");
//	strcpy(street,"yanta");
//	strcpy(city,"xi'an");
//	code=71002;
//}
//
//Address::Address(char *n,char *s,char *c,int co){
//	strcpy(this->name,n);
//	strcpy(this->street,s);
//	strcpy(this->city,c);
//	this->code=co;
//}
//
//void Address::Changename(char *n){
//	strcpy(this->name,n);
//}
//
//void Address::Display(){
//	cout<<name<<"ʡ "<<city<<"�� "<<street<<"�ֵ� "<<"�ʱࣺ"<<code<<endl;
//}
//
//int main(){
//	Address ad;
//	ad.Display();
//}

//ϰ��7.5
//class Point3D{
//private:
//	double x,y,z;
//public:
//	Point3D();//���캯����һ�֣���������
//	Point3D(double x,double y,double z);
//	double distance(Point3D p);
//	~Point3D();//��������
//};
//
//Point3D::Point3D(){
//	x=0;
//	y=0;
//	z=0;
//}
//
//Point3D::Point3D(double x,double y,double z){
//	this->x=x;
//	this->y=y;
//	this->z=z;
//}
//
//Point3D::~Point3D(){
//	cout<<"��("<<x<<","<<y<<","<<z<<")���ͷ�\n";
//}
//
//double Point3D::distance(Point3D p){
//	double x1,y1,z1,distance;
//	x1=pow((x-p.x),2);
//	y1=pow((y-p.y),2);
//	z1=pow((z-p.z),2);
//	distance=sqrt(x1+y1+z1);
//	return distance;
//}
//
//int main(){
//	Point3D p1;
//	Point3D p2(1,0,0);
//	cout<<p1.distance(p2)<<endl;
//}

//class E_Clock{
//private:
//	int hour,minute,second;
//	bool Is59ofs();
//public:
//	E_Clock();
//	E_Clock(int hour,int minute,int second);
//	void showTime();
//	void addSecond();//���1���ܣ������빦�ܽ�ϣ�ʵ�ּ�ʱ�����빦�ܡ�
//	void run1s();//���빦��
//	void minus1s();//���빦�ܣ�ʵ�ֵ���ʱ
//};
//
//E_Clock::E_Clock(){
//	this->hour=0;
//	this->minute=0;
//	this->second=0;
//}
//E_Clock::E_Clock(int hour,int minute,int second){
//	this->hour=hour;
//	this->minute=minute;
//	this->second=second;
//}
//
//bool E_Clock::Is59ofs(){
//	if(second==59){
//		return true;
//	}else{
//		return false;
//	}
//}
//
//void E_Clock::addSecond(){
//	if (Is59ofs()) {
//		if (minute == 59) {
//			if(hour==23){
//				hour=0;
//				minute=0;
//				second=0;
//			}else{
//				hour++;
//				minute = 0;
//				second = 0;
//			}
//		}else{
//			minute++;
//			second=0;
//		}
//	}else {
//		second++;
//	}
//}
//
//void E_Clock::showTime(){
//	cout<<"���õ�ʱ��Ϊ"<<hour<<":"<<minute<<":"<<second<<endl;
//}
//
//void E_Clock::run1s(){
//	Sleep(1000);
//}
//void E_Clock::minus1s(){
//	if(second==0){
//		if(minute==0){
//			if(hour==0){
//				hour=23;
//				minute=59;
//				second=59;
//			}else{
//				minute=59;
//				second=59;
//				hour--;
//			}
//		}else{
//			second=59;
//			minute--;
//		}
//	}else{
//		second--;
//	}
//}
//
//int main(){
////	long t;
//	int h,m,s;
////	time(&t);
////	h=t/3600;
////	m=(t-h*3600)/60;
////	s=t%60;
////	h=(h+8)%24;//��δ���Ϊ��ȡϵͳ��ǰʱ��Ĵ���
////	E_Clock ec(h,m,s);
//
////	SYSTEMTIME st = {0};
////	 GetLocalTime(&st);
//////	  st.wYear,
//////	  st.wMonth,
//////	  st.wDay,
////	  h=st.wHour,
////	  m=st.wMinute,
////	  s=st.wSecond;
//	  E_Clock ec(0,0,5);
//	  ec.showTime();
//	  for(int i=0;i<10;i++){
//		  ec.run1s();
//		  ec.minus1s();
//		  ec.showTime();
//	  }
//	  MessageBeep(MB_OK);//ʹϵͳ����
//}
