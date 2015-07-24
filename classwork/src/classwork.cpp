#include <iostream>
#include <cstring>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <afxres.h>
using namespace std;

//习题7.1
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
//	cout<<"狗的名字\t"<<name<<endl;
//	cout<<"狗的年龄\t"<<age<<endl;
//	cout<<"狗的性别\t"<<sexal[0]<<endl;
//	cout<<"狗的体重\t"<<weight<<endl;
//}
//int main() {
//	Dog doge("liuxia",27,femal,48.0f);
//	doge.show();
//	return 0;
//}

//习题7.2
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
//	cout<<"圆的面积是："<<c.area()<<endl;
//	cout<<"圆的周长是："<<c.length();
//	return 0;
//}
//

//习题7.3
//class Triangle{
//private:
//	double b1,b2,b3;
//
//public:
//	Triangle(double b1,double b2,double b3);
//	bool Istri();
//	double area();
//	bool Isrig();//直角
//	bool IsAcute();//锐角
//	bool IsObtuse();//钝角
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
//			cout << "该三角形是锐角三角形\n";
//		}
//		if (tri1.IsObtuse()) {
//			cout << "该三角形是钝角三角形\n";
//		}
//		if (tri1.Isrig()) {
//			cout << "该三角形是直角三角形\n";
//		}
//		cout << "该三角形面积是：" << tri1.area();
//	}else{
//		cout<<"该三条直线不能构成三角形";
//	}
//	return 0;
//}

//习题7.4
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
//	cout<<name<<"省 "<<city<<"市 "<<street<<"街道 "<<"邮编："<<code<<endl;
//}
//
//int main(){
//	Address ad;
//	ad.Display();
//}

//习题7.5
//class Point3D{
//private:
//	double x,y,z;
//public:
//	Point3D();//构造函数的一种，可以重载
//	Point3D(double x,double y,double z);
//	double distance(Point3D p);
//	~Point3D();//析构函数
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
//	cout<<"点("<<x<<","<<y<<","<<z<<")被释放\n";
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

//习题7.6
//class E_Clock{
//private:
//	int hour,minute,second;
//	bool Is59ofs();
//public:
//	E_Clock();
//	E_Clock(int hour,int minute,int second);
//	void showTime();
//	void addSecond();//秒加1功能，与走秒功能结合，实现计时与走秒功能。
//	void run1s();//走秒功能
//	void minus1s();//减秒功能，实现倒计时
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
//	cout<<"设置的时间为"<<hour<<":"<<minute<<":"<<second<<endl;
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
////	h=(h+8)%24;//这段代码为获取系统当前时间的代码
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
//	  MessageBeep(MB_OK);//使系统发声
//}

//习题7.7
//class Rational{
//private:
//	int numerator,denominator;
//
//public:
//	Rational();
//	Rational(int numerator,int denominator);
//	Rational add(Rational r);
//	Rational sub(Rational r);
//	Rational mul(Rational r);
//	Rational div(Rational r);
//	int gcd(int a,int b);
//	void show();
//};
//
//Rational::Rational(){
//	numerator=1;
//	denominator=2;
//}
//
//Rational::Rational(int numerator,int denominator){
//	this->numerator=numerator;
//	this->denominator=denominator;
//}
//
//int Rational::gcd(int p,int q){
//	int tmp1,c;
//		if(p<q){//保证p一定大于q
//			tmp1=p;
//			p=q;
//			q=tmp1;
//		}
//		c = p % q;
//		while(c!=0){
//			p=q;
//			q=c;
//			c=p%q;
//		}
//		return q;
//	}
//
//Rational Rational::add(Rational u) {
//	int tmp;
//	Rational v;
//	v.numerator=numerator*u.denominator+denominator*u.numerator;
//	v.denominator=denominator*u.denominator;
//	tmp=gcd(v.numerator,v.denominator);
//	v.numerator=v.numerator/tmp;
//	v.denominator=v.denominator/tmp;
//	return v;
//}
//
//Rational Rational::sub(Rational u) {
//	int tmp;
//	Rational v;
//	v.numerator = numerator * u.denominator - denominator * u.numerator;
//	v.denominator = denominator * u.denominator;
//	tmp = gcd(v.numerator, v.denominator);
//	v.numerator = v.numerator / tmp;
//	v.denominator = v.denominator / tmp;
//	return v;
//}
//Rational Rational::mul(Rational u) {
//	int tmp;
//	Rational v;
//	v.numerator = numerator * u.numerator;
//	v.denominator = denominator * u.denominator;
//	tmp = gcd(v.numerator, v.denominator);
//	v.numerator = v.numerator / tmp;
//	v.denominator = v.denominator / tmp;
//	return v;
//}
//Rational Rational::div(Rational u) {
//	Rational r;
//	r.numerator=u.denominator;
//	r.denominator=u.numerator;
//	return mul(r);
//}
//
//void Rational::show(){
//	cout<<"the ration is "<<numerator<<"/"<<denominator<<endl;
//}
//
//int main(){
//	Rational r1(2,3);
//	Rational r2(4,3);
//	Rational r3=r1.div(r2);
//	r3.show();
//}

//习题7.9
//class Time {
//private:
//	int hour, minute, second;
//public:
//	Time();
//	Time(int hour, int mintue, int second);
//	void set(int hour, int mintue, int second);
//	Time add(Time t);
//	Time sub(Time t);
//	void show24();
//	void show12();
//};
//
//Time::Time(){
//	hour=0;
//	minute=0;
//	second=0;
//}
//
//Time::Time(int hour, int mintue, int second){
//	set(hour,mintue,second);
//}
//
//void Time::set(int hour, int mintue, int second){
//	this->hour=hour;
//	this->minute=mintue;
//	this->second=second;
//}
//
//Time Time::add(Time t){
//	Time ti;
//	ti.second=second+t.second;
//	if(ti.second>59){
//		ti.second-=60;
//		ti.minute++;
//	}
//	ti.minute+=minute+t.minute;
//	if(ti.minute>59){
//		ti.minute-=60;
//		ti.hour++;
//	}
//	ti.hour+=hour+t.hour;
//	return ti;
//}
//
//Time Time::sub(Time t){//不能按时间段处理，不允许有负数
//	Time ti;
//	if(second<t.second){//秒的相减
//		if(minute==0){
//			if(hour==0){
//				hour=23;
//				minute=59;
//				ti.second=second+60-t.second;
//			}else{
//				hour--;
//				minute=59;
//				ti.second=second+60-t.second;
//			}
//		}else{
//			minute--;
//			ti.second = second + 60 - t.second;
//
//		}
//	}else{
//		ti.second=second-t.second;
//	}
//	if(minute<t.minute){//分的相减
//		if(hour==0){
//			hour=23;
//			ti.minute=minute+60-t.minute;
//		}else{
//			hour--;
//			ti.minute=minute+60-t.minute;
//		}
//	}else{
//		ti.minute=minute-t.minute;
//	}
//
//	if(hour<t.hour){
//		ti.hour=24+hour-t.hour;
//	}else{
//		ti.hour=hour-t.hour;
//	}
//
//	return ti;
//}
//
//void Time::show24(){
//	cout<<hour<<":"<<minute<<":"<<second<<endl;
//}
//
//void Time::show12(){
//	if(hour>12){
//		cout<<hour-12<<":"<<minute<<":"<<second<<" PM"<<endl;
//	}else{
//		cout<<hour<<":"<<minute<<":"<<second<<" AM"<<endl;
//	}
//}
//
//int main(){
//	Time t1(0,0,20);
//	Time t2(1,0,50);
//	Time t3=t1.add(t2);
//	t3.show12();
//}

//习题7.10
class Date{
private:
	int year,month,day;
public:
	Date();
	Date(int year,int month,int day);
	void show();
};

Date::Date(){
	year=1970;
	month=1;
	day=1;
}

Date::Date(int year,int month,int day){
		this->year=year;
		this->month=month;
		this->day=day;
	}

void Date::show(){
	cout<<year<<"/"<<month<<"/"<<day<<endl;
}

class EmpSalary{
private:
	double wage,subsidy,rent,costofelec,costofwarter;
public:
	EmpSalary();
	EmpSalary(double wage,double subsidy,double rent,double costofelec,double costofwarter);
	double realsum();
};

EmpSalary::EmpSalary(){
	wage = 0;
	subsidy = 0;
	rent = 0;
	costofelec = 0;
	costofwarter = 0;
}

EmpSalary::EmpSalary(double wage,double subsidy,double rent,double costofelec,double costofwarter){
	this->wage=wage;
	this->subsidy=subsidy;
	this->rent=rent;
	this->costofelec=costofelec;
	this->costofwarter=costofwarter;
}

double EmpSalary::realsum(){
	return wage+subsidy+rent+costofelec+costofwarter;
}

enum Position{
	Manager,Engineer,Employee1,Work
};


class Employee{
private:
	char department[20],name[20];
	Date dayofWork,birthday;
	EmpSalary salary;
	Position empPosition;

public:
	void regist (char *d,char *n,Date b,Position e,Date day,EmpSalary s);
	Employee (char *d,char *n,Date b,Position e,Date day,EmpSalary s);
	Employee();
	void setSalary(EmpSalary e);
	EmpSalary   getSalary();
	void showMessage();
};

void Employee::regist (char *d,char *n,Date b,Position e,Date day,EmpSalary s){
	strcpy(department,d);
	strcpy(name,n);
	birthday=b;
	empPosition=e;
	dayofWork=day;
	salary=s;
}

Employee::Employee(){
	strcpy(department,"Tr");
	strcpy(name,"amwaynhoo");
	Date b(1989,8,12);
	birthday=b;
	empPosition=Manager;
	Date day(2015,8,12);
	dayofWork=day;
	EmpSalary es;
	salary=es;
}

Employee::Employee (char *d,char *n,Date b,Position e,Date day,EmpSalary s){
	regist(d,n,b,e,day,s);
}

//void Employee::setSalary(EmpSalary e){
//	salary.costofelec=e.costofelec;
//	salary.costofwarter=e.costofwarter;
//	salary.rent=e.rent;
//	salary.subsidy=e.subsidy;
//	salary.wage=e.wage;
//}
//
//EmpSalary Employee::getSalary(){
//	return salary;
//}

void Employee::showMessage(){
	cout<<"工作部门\t"<<department<<endl;
	cout<<"姓名\t"<<name<<endl;
	cout<<"出生日期\t";birthday.show();
	cout<<"职务\t"<<empPosition<<endl;
	cout<<"参加工作时间\t";dayofWork.show();
	cout<<"工资\t"<<salary.realsum()<<endl;
}

int main(){//测试程序
	Employee emp;
	emp.showMessage();
}
