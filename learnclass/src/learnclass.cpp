#include <iostream>
#include "fraction.h"
using namespace std;

//class CLOCK{//class <类名>
//private://<访问限定符>：，除private外，还有public,protected
//	int Hour;//成员列表，与变量声明类似。
//	int Minute;
//	int Second;
//public://成员函数访问限定符，与一般函数定义相同。
//	void Set(int h,int m,int s){
//		Hour=h;
//		Minute=m;
//		Second=s;
//	}
//	void Run();
//	void Show(){
//		cout<<Hour<<":"<<Minute<<":"<<Second;
//	}
//
//	//构造函数
//	CLOCK(){
//		Hour=0;
//		Minute=0;
//		Second=0;
//	}
//	CLOCK(CLOCK &c){
//		Hour=c.Hour;
//		Minute=c.Minute;
//		Second=c.Second;
//	}
//	CLOCK(int h,int m,int s);
//};
//void CLOCK::Run(){//<返回类型><所属类>::<函数名>(<形参列表>){<函数体>}
//	int i=0;
//	for(i=0;i<10;i++){
//		Second++;
//		if(Second==60){
//			Second=0;
//			Minute++;
//			if(Minute==60){
//				Minute=0;
//				Hour++;
//				if(Hour==24){
//					Hour=0;
//				}
//			}
//		}
//		cout<<'\r';
//		Sleep(1000);
//		Show();
//	}
//}
//
//CLOCK::CLOCK(int h,int m,int s){
//	Hour=h;
//	Minute=m;
//	Second=s;
//}
//int main() {
//	CLOCK c1(1,2,3);
//	CLOCK c2(c1);
//	//c1.Set(0,0,0);
//	c1.Show();
//	cout<<endl;
//	c2.Show();
////	c1.Run();
////	c1.Set(1,1,30);
////	c1.Run();
////	cout<<endl;
////	c1.Show();
//	return 0;
//}

//例7-5
//
//class Npoint{
//private:
//	int dimension;
//	double *data;
//public:
//	Npoint(int N);
//	Npoint(Npoint &y);
//	Npoint(int N,double a[],int M);
//	void set(double A[],int M);
//	double distance(Npoint y);
//	void show();
//	~Npoint(){
//		cout<<"This is the destructor function\n";
//		cout<<"Point\n";
//		show();
//		delete []data;
//	}
//};
//Npoint::Npoint(int N){
//	int i;
//	double *p;
//	dimension=N;
//	data= new double[N];
//	p=data;
//	for(i=0;i<N;i++){
//		*p=0;
//		p++;
//	}
//}
//
//Npoint::Npoint(Npoint &y){
//	int i;
//	double *p,*q;
//	dimension=y.dimension;
//	data=new double[dimension];
//	p=data;
//	q=y.data;
//	for(i=0;i<dimension;i++){
//		*p=*q;
//		p++;
//		q++;
//	}
//}
//
//Npoint::Npoint(int N,double A[],int M){
//	dimension=N;
//	data=new double[N];
//	set(A,M);
//}
//
//void Npoint::set(double A[],int M){
//	int i;
//	double *p;
//	p=data;
//	if(M<dimension){
//		for(i=0;i<M;i++){
//			*p=A[i];
//			p++;
//		}
//		for(i=M;i<dimension;i++){
//			*p=0;
//			p++;
//		}
//	}else{
//		for(i=0;i<dimension;i++){
//			*p=A[i];
//			p++;
//		}
//	}
//}
//
////计算两点之间的距离
//double Npoint::distance(Npoint y){
//	int i=0;
//	double d=0;
//	double *p,*q;
//	p=data;
//	q=y.data;
//	for(i=0;i<dimension;i++){
//		d=d+((*p)-(*q))*((*p)-(*q));
//		p++;
//		q++;
//	}
//	return sqrt(d);
//}
//
////显示点的坐标
//void Npoint::show(){
//	int i=0;
//	double *p;
//	p=data;
//	for(i=0;i<dimension;i++){
//		cout<<(*p)<<" ";
//		p++;
//	}
//	cout<<endl;
//}
//
////主函数
//int main(){
//	const int N=5;
//	double A[5]={1,4,2,6,3};
//	double B[N-1]={2,3,6,2};
//	double C[N+1]={3,7,6,8,9,5};
//	Npoint p1(N,A,N);
//	Npoint p2(p1);
//	Npoint p3(N);
//	cout<<"These threee point are :\n";
//	p1.show();
//	p2.show();
//	p3.show();
//	cout<<"distance:\n";
//	cout<<"distance p1-p2: "<<p1.distance(p2)<<endl;
//	cout<<"distance p1-p3: "<<p1.distance(p3)<<endl;
//
//	p2.set(B,N-1);
//	p3.set(C,N+2);
//	cout<<"show point s afger changing \n";
//	p1.show();
//	p2.show();
//	p3.show();
//	cout << "distance: \n";
//	cout << "distance p1-p2: " << p1.distance(p2) << endl;
//	cout << "distance p1-p3: " << p1.distance(p3) << endl;
//	return 0;
//}

//class Point{
//private:
//	int x;
//	int y;
//public:
//	Point(int a,int b){
//		x=a;
//		y=b;
//		cout<<"Point构造函数1("<<x<<","<<y<<")"<<endl;
//	}
//	Point(Point &z){
//		x=z.x;
//		y=z.y;
//		cout<<"Point构造函数2("<<x<<","<<y<<")"<<endl;
//	}
//	void show(){
//		cout<<"("<<x<<","<<y<<")"<<endl;
//	}
//};
//
//class myRectangle{
//private:
//	Point lefttop;
//	Point rightbottom;
//public:
//	myRectangle(int a,int b,int c,int d):lefttop(a,b),rightbottom(c,d){//
//		//<类名>(形参列表0):内嵌对象1(形参列表2),内嵌对象2(形参列表3)...{}
//		cout<<"Rectangle构造函数1\n";
//	}
//	myRectangle(Point A,Point B):lefttop(A),rightbottom(B){
//		cout<<"Rectangle构造函数2\n";
//	}
//	void show1(){
//		cout<<"Rectangle\n";
//		lefttop.show();
//		rightbottom.show();
//	}
//};
//
//int main(){
//	int x1=1,y1=2,x2=3,y2=4;
//	Point p11(11,12);
//	Point p12(13,14);
//	myRectangle r1(x1,y1,x2,y2);
//	myRectangle r2(p11,p12);
//
//	r1.show1();
//	r2.show1();
//
//	return 0;
//}

//class Date{
//public:
//	int year,month,day;
//	void add(int n);
//	void show(){
//		cout<<year<<" "<<month<<" "<<day<<endl;
//	}
//};
//
//int main(){
//
//	Date today,tomorrow;
//	Date *r;//与指向变量的指针形式一样，用法一样，为  <类名> *<对象指针名>
//	r=&tomorrow;//指针的赋值也与变量一样！
//	int *p,*q;
//	p=&today.day;//指向类成员的指针
//	q=&(r->day);
//
//	void (Date:: *o)();//指向成员函数的指针。格式为  <数据类型>  (<类名>::*<指针变量名>)(参数列表)
//	o=&Date::show;//赋值形式。格式为<指针变量名>=<类名>::<成员函数名>;
//	*p=25;
//	*q=28;
//	(*r).show();//很好使用，与指向变量指针
////	today.show();
//	(today.*o)();//指向成员函数的指针的使用形式！
//	return 0;
//}

//int main(){
//	int p=4453,q=5767;
//	int tmp1,c,d;
//	if(p<q){//保证p一定大于q
//		tmp1=p;
//		p=q;
//		q=tmp1;
//	}
//	while (c != 0) {
//		c = p % q;
//		p = q;
//		d=q;
//		q = c;
//	}
//	cout<<d;
//	return 0;
//}


int main(){
	Fraction f1(1,4),f2(5,6),f3;
	int a,b,c,d;
	cout<<"本程序实现分数的加法，例如\n";
	f1.show();
	cout<<"+";
	f2.show();
	f3=f1.add(f2);
	cout<<"=";
	f3.show();
	while(1){
		cout<<"\n请分别输入两个分数的分子和分母，分母为0时退出\n";
		cin>>a>>b;
		cin>>c>>d;
		if(b==0||d==0){
			break;
		}
		f1.set(a,b);
		f2.set(c,d);
		f1.show();
		cout << "+";
		f2.show();
		f3 = f1.add(f2);
		cout << "=";
		f3.show();
	}
}
