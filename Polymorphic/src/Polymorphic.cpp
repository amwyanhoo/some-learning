#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
using namespace std;


//虚函数
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

//抽象类
//class Shape{
//public:
//	virtual double area()=0;
//	virtual double circumference()=0;
//};
//
//class Rectangle: public Shape{
//	double x,y;
//	double width,heigth;
//public:
//	Rectangle(double x,double y,double width,double heigth){
//		this->x=x;
//		this->y=y;
//		this->width=width;
//		this->heigth=heigth;
//	}
//	double area(){
//		return width*heigth;
//	}
//	double circumference(){
//		return 2*width+2*heigth	;
//	}
//};
//
//class Circle: public Shape{
//	double x,y;
//	double r;
//public:
//	Circle(double x,double y,double r){
//		this->x=x;
//		this->y=y;
//		this->r=r;
//	}
//	double area(){
//		return 3.1415*r*r;
//	}
//	double circumference(){
//		return 2*3.1415*r;
//	}
//};
//
//int main(){
//	Rectangle r(0,0,5,10);
//	Circle c(0,0,3);
//	Shape *p,&q=c;
//	p=&r;
//	cout<<p->area()<<endl;
//	cout<<q.area()<<endl;
//}

//前置++与后置++的重载
//class Time{
//	int minute,second;
//public:
//	Time(int m,int s):minute(m),second(s){//由初始化列表来完成构造函数，类的继承里用过。
//
//	}
//
//
//	Time operator++(){//重载前置++
//		++second;
//		if(second>=60){
//			++minute;
//			second-=60;
//		}
//		return *this;
//	}
//
//	Time operator ++(int){
//		Time t(0,0);
//		t.minute=minute;
//		t.second=second;
//		second++;
//		if(second>=60){
//			minute++;
//			second-=60;
//		}
//		return t;
//	}
//	void show(){
//		cout<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
//	}
//};
//
//int main(){
////	Time t1(30,58);
////	for(int i=0;i<3;i++){
////		++t1;
////		t1.show();
////	}
//
//	Time t4(30,58);
//	(++t4).show();
//
//	Time t5(30, 58);
//	(t5++).show();
//
//	return 0;
//}

//符号[]的重载
//class Word{
//	char *str;
//	int len;
//public:
//	Word(char *s){
//		len=strlen(s);
//		str=new char[len+1];
//		strcpy(this->str,s);
//	}
//
//	~Word(){
//		delete []str;
////		cout<<"Word的析构函数正在执行 "<<str<<" "<<len<<endl;
//	}
//
//	char & operator [](int i){//在Word类中写的重载，故用法为w[i]
//		if(i>=0&&i<len){
//			return *(str+i);//返回类型为char,对应于函数头
//		}else{
//			cout<<"下标越界，返回第一个元素！"<<endl;
//			return *(str);
//		}
//	}
//
//	void display(){
//		cout<<str<<endl;
//	}
//};
//
//int main(){
//	Word w("google");
//	w.display();
//	w[1]='a';//在哪个类中写的符号重载，就用这个类的对象进行操作。
//	cout<<w[0]<<endl;
//	cout<<w[1]<<endl;
//	cout<<w[10]<<endl;
//}

//重载=与+运算符
//class Complex{
//	double real,imag;
//public:
//	Complex(double r=0,double i=0):real(r),imag(i){};
//
//	double getReal(){
//		return real;
//	}
//	double getImag(){
//		return imag;
//	}
//
//	Complex operator +(Complex c){//operator是指类型为Complex的某个对象，操作者，写在操作符左边，由它发起调用。 +(Complex c)意为+上一个类型为Complex的对象c，写在操作符右边
//		Complex co;
//		co.real=real+c.real;
//		co.imag=imag+c.imag;
//		return co;
//	}
//
//	Complex operator +(double d);
//	Complex operator =(Complex);
//
//	void show(){
//		if(imag>0){
//			cout<<real<<"+j"<<imag<<endl;
//		}else if (imag<0) {
//			cout<<real<<"-j"<<(-imag)<<endl;
//		}else{
//			cout<<real<<endl;
//		}
//	}
//};
//
//Complex Complex::operator +(double d){
//	Complex co;
//	co.real=real+d;
//	co.imag=imag;
//	return co;
//}
//
//Complex Complex::operator =(Complex c){
//	real=c.real;
//	imag=c.imag;
//	return *this;
//}
//
//int main(){
//	Complex c1(3,-4),c2(5,6),c3;
////	cout<<"c1=";
////	c1.show();
////	cout<<"c2=";
////	c2.show();
//
//	c3=c1+c2;//
//	cout<<"c3=";
//	c3.show();
//
//	return 0;
//}

//例9-6
//int main(){
//	Shape *s;
////	Point p(3,4);
//	Circle c(3,4,5);
//	s=&c;
////	s->show();
//	(*s).show();
//	s->showkey();
//
//	return 0;
//}


//例9-7
//class Array{
//	int size,*ptr;
//public:
//	Array(int arraySize=10);
//	Array(Array &);
//	~Array();
//	int getSize();
//	bool operator ==(Array &);
//	Array operator +(Array &);
//	Array operator -(Array &);
//	void input();
//	void output();
//};
//
//Array::Array(int arraySize){
//	this->size=arraySize;
//	ptr=new int [size];
//	for(int i=0;i<size;i++){
//		ptr[i]=0;
//	}
////	int m[size];
////	for(int i=0;i<size;i++){
////		m[i]=0;
////	}
////	ptr=m;
//}
//
//Array::Array(Array &a){
//	size=a.size;
//	ptr=new int[size];
//	for(int i=0;i<size;i++){
//		ptr[i]=a.ptr[i];
//	}
//}
//
//Array::~Array(){
//	delete []ptr;
//}
//
//int Array::getSize(){
//	return size;
//}
//
//bool Array::operator ==(Array &a) {
//	if (size != a.size) {
//		return false;
//	}
//	for (int i = 0; i < size; i++) {
//		if (ptr[i] != a.ptr[i]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//Array Array::operator +(Array &a){
//	if(size==a.size){
//		Array tmp(size);
//		for(int i=0;i<size;i++){
//			tmp.ptr[i]=ptr[i]+a.ptr[i];
//		}
//		return tmp;
//	}else{
//		cout<<"数组大小不相等，不能相加!\n";
//		exit(1);
//	}
//}
//
//Array Array::operator -(Array &a){
//	if(size==a.size){
//		Array tmp(size);
//		for(int i=0;i<size;i++){
//			tmp.ptr[i]=ptr[i]-a.ptr[i];
//		}
//		return tmp;
//	}else{
//		cout<<"数组大小不相等，不能相减!\n";
//		exit(1);
//	}
//}
//
//void Array::input(){
//	for(int i=0;i<getSize();i++){
//		cout<<"第"<<i<<"个";
//		cin>>ptr[i];
//	}
//}
//
//void Array::output(){
//	cout<<"内容为";
//	for(int i=0;i<getSize();i++){
//		cout<<ptr[i]<<" ";
//	}
//	cout<<endl;
//}
//
//ostream & operator<<(ostream & out,Array &array){
//	array.output();
//	return out;
//}
//
//int main(){
//	Array s1(3),s2(3);
//	cout<<"请输入s1内容"<<endl;
//	s1.input();
//	cout<<"请输入s2内容"<<endl;
//	s2.input();
////	if(s1==s2){
////		cout<<"s1=s2"<<endl;
////	}else{
////		cout<<"s1!=s2"<<endl;
////	}
////	(s1+s2).output();
//	return 0;
//}


//例9-8

class Base{
	char *ID;
	char *name;
	char sex[3];
	int age;
public:
	Base(char *id,char *Name,char *sex,int a){
		setBase(id,Name,sex,a);
	}
	virtual ~Base(){
		delete []ID;
		delete []name;
	}
	void setBase(char *id,char *Name,char *sex,int a){
		ID=new char(strlen(id)+1);
		strcpy(this->ID, id);
		name=new char(strlen(Name)+1);
		strcpy(this->name, Name);
		strcpy(this->sex,sex);
		age = a;
	}
	virtual void display(){
		cout<<"身份证号：\t"<<ID<<endl;
		cout<<"姓名：\t"<<name<<endl;
		cout<<"性别：\t"<<sex<<endl;
		cout<<"年龄：\t"<<age<<endl;
	}
};

class Student: virtual public Base{
protected:
	char *major;
	int s_num;
	int level;
public:
	Student(char *id,char *name,char sex[],int a,char *m,int s,int l):Base(id,name,sex,a){
		major = new char(strlen(m) + 1);
		strcpy(major, m);
		s_num = s;
		level = l;
	}
	virtual ~Student(){
		delete []major;
	}
	void setStudent(char *id,char *name,char *sex,int a,char *m,int s,int l){
		setBase(id,name,sex,a);
		major=new char(strlen(m)+1);
		strcpy(major,m);
		s_num=s;
		level=l;
	}
	virtual void display(){
		Base::display();
		cout<<"学生专业：\t"<<major<<endl;
		cout<<"学生学号：\t"<<s_num<<endl;
		cout<<"学生年级：\t"<<level<<endl;
	}
};

class Employee:virtual public Base{//虚基类当不止一次地通过多个路径继承基类时，可以使用虚基类，其格式为
	//Class 派生类名: virtual  继承方式  基类名
protected:
	char *dept;
	double salary;
public:
	Employee(char *id,char *name,char *sex,int a,char *d,double salary):Base(id,name,sex,a){
		dept = new char(strlen(d) + 1);
		strcpy(dept, d);
		this->salary = salary;
	}
	virtual ~Employee(){
		delete []dept;
	}
	void setEmployee(char *id,char *name,char *sex,int a,char *d,double salary){
		setBase(id,name,sex,a);
		dept=new char (strlen(d)+1);
		strcpy(dept,d);
		this->salary=salary;
	}
	virtual void display(){
		Base::display();
		cout<<"职员部门：\t"<<dept<<endl;
		cout<<"职员薪资：\t"<<salary<<endl;
	}
};

class Teacher : public Employee{
protected:
	char *title;
public:
	Teacher(char *id,char *name,char *sex,int a,char *d,double salary,char *tit):
		Base(id,name,sex,a),
		Employee(id,name,sex,a,d,salary){//此处是否有错误，有待观察
		title = new char(strlen(tit) + 1);
		strcpy(this->title, tit);
	}
	virtual ~Teacher(){
		delete []title;
	}
	void setTeacher(char *id,char *name,char *sex,int a,char *d,double salary,char *tit){
		setBase(id,name,sex,a);
		setEmployee(id,name,sex,a,d,salary);
		title = new char(strlen(tit) + 1);
		strcpy(this->title, tit);
	}
	void display(){
		Employee::display();
		cout<<"老师职称：\t"<<title<<endl;
	}
};

class Graduate: public Employee,Student{
public:
	Graduate(char *id,char *name,char *sex,int a,char *d,double salary,char *m,int s,int l):
		Base(id,name,sex,a),Employee(id,name,sex,a,d,salary),
		Student(id,name,sex,a,m,s,l){
	}
	virtual void display(){
		Student::display();
		cout<<"工作部门：\t"<<dept<<endl;
		cout<<"工资：\t"<<salary<<endl;
	}
};

void info1();
void info2();

void input1(Student s1[]){
	char id[15],name[21],sex[3],major[11];
	int age,s_num,level;
	cout<<"学生信息录入"<<endl;
	for(int i=0;i<2;i++){
		cout<<"身份证号：";cin>>id;
		cout<<"姓名：";cin>>name;
		cout<<"性别：";cin>>sex;
		cout<<"年龄：";cin>>age;
		cout<<"学生专业：";cin>>major;
		cout<<"学生年级：";cin>>level;
		s1[i].setStudent(id,name,sex,age,major,s_num,level);
		s1[i].display();
	}
}

int main(){//未完成，有瑕疵
	Student s[1]={Student("620101197505223114","关键","男",26,"电信学院",8457678,3)};
	input1(s);
	return 0;
}

