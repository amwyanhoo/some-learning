#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
using namespace std;


//�麯��
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
//		cout<<"�ֻ���ʽ��GSM"<<endl;
//	}
//};
//
//class MobileCdma:public Mobile{
//public :
////	int memory;
//	void showtd(){
//		cout<<"�ֻ���ʽ��CDMA"<<endl;
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

//������
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

//ǰ��++�����++������
//class Time{
//	int minute,second;
//public:
//	Time(int m,int s):minute(m),second(s){//�ɳ�ʼ���б�����ɹ��캯������ļ̳����ù���
//
//	}
//
//
//	Time operator++(){//����ǰ��++
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

//����[]������
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
////		cout<<"Word��������������ִ�� "<<str<<" "<<len<<endl;
//	}
//
//	char & operator [](int i){//��Word����д�����أ����÷�Ϊw[i]
//		if(i>=0&&i<len){
//			return *(str+i);//��������Ϊchar,��Ӧ�ں���ͷ
//		}else{
//			cout<<"�±�Խ�磬���ص�һ��Ԫ�أ�"<<endl;
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
//	w[1]='a';//���ĸ�����д�ķ������أ����������Ķ�����в�����
//	cout<<w[0]<<endl;
//	cout<<w[1]<<endl;
//	cout<<w[10]<<endl;
//}

//����=��+�����
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
//	Complex operator +(Complex c){//operator��ָ����ΪComplex��ĳ�����󣬲����ߣ�д�ڲ�������ߣ�����������á� +(Complex c)��Ϊ+��һ������ΪComplex�Ķ���c��д�ڲ������ұ�
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

//��9-6
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


//��9-7
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
//		cout<<"�����С����ȣ��������!\n";
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
//		cout<<"�����С����ȣ��������!\n";
//		exit(1);
//	}
//}
//
//void Array::input(){
//	for(int i=0;i<getSize();i++){
//		cout<<"��"<<i<<"��";
//		cin>>ptr[i];
//	}
//}
//
//void Array::output(){
//	cout<<"����Ϊ";
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
//	cout<<"������s1����"<<endl;
//	s1.input();
//	cout<<"������s2����"<<endl;
//	s2.input();
////	if(s1==s2){
////		cout<<"s1=s2"<<endl;
////	}else{
////		cout<<"s1!=s2"<<endl;
////	}
////	(s1+s2).output();
//	return 0;
//}


//��9-8

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
		cout<<"���֤�ţ�\t"<<ID<<endl;
		cout<<"������\t"<<name<<endl;
		cout<<"�Ա�\t"<<sex<<endl;
		cout<<"���䣺\t"<<age<<endl;
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
		cout<<"ѧ��רҵ��\t"<<major<<endl;
		cout<<"ѧ��ѧ�ţ�\t"<<s_num<<endl;
		cout<<"ѧ���꼶��\t"<<level<<endl;
	}
};

class Employee:virtual public Base{//����൱��ֹһ�ε�ͨ�����·���̳л���ʱ������ʹ������࣬���ʽΪ
	//Class ��������: virtual  �̳з�ʽ  ������
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
		cout<<"ְԱ���ţ�\t"<<dept<<endl;
		cout<<"ְԱн�ʣ�\t"<<salary<<endl;
	}
};

class Teacher : public Employee{
protected:
	char *title;
public:
	Teacher(char *id,char *name,char *sex,int a,char *d,double salary,char *tit):
		Base(id,name,sex,a),
		Employee(id,name,sex,a,d,salary){//�˴��Ƿ��д����д��۲�
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
		cout<<"��ʦְ�ƣ�\t"<<title<<endl;
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
		cout<<"�������ţ�\t"<<dept<<endl;
		cout<<"���ʣ�\t"<<salary<<endl;
	}
};

void info1();
void info2();

void input1(Student s1[]){
	char id[15],name[21],sex[3],major[11];
	int age,s_num,level;
	cout<<"ѧ����Ϣ¼��"<<endl;
	for(int i=0;i<2;i++){
		cout<<"���֤�ţ�";cin>>id;
		cout<<"������";cin>>name;
		cout<<"�Ա�";cin>>sex;
		cout<<"���䣺";cin>>age;
		cout<<"ѧ��רҵ��";cin>>major;
		cout<<"ѧ���꼶��";cin>>level;
		s1[i].setStudent(id,name,sex,age,major,s_num,level);
		s1[i].display();
	}
}

int main(){//δ��ɣ���覴�
	Student s[1]={Student("620101197505223114","�ؼ�","��",26,"����ѧԺ",8457678,3)};
	input1(s);
	return 0;
}

