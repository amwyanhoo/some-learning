#include <iostream>
#include "fraction.h"
using namespace std;

//class CLOCK{//class <����>
//private://<�����޶���>������private�⣬����public,protected
//	int Hour;//��Ա�б�������������ơ�
//	int Minute;
//	int Second;
//public://��Ա���������޶�������һ�㺯��������ͬ��
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
//	//���캯��
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
//void CLOCK::Run(){//<��������><������>::<������>(<�β��б�>){<������>}
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

//��7-5
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
////��������֮��ľ���
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
////��ʾ�������
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
////������
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
//		cout<<"Point���캯��1("<<x<<","<<y<<")"<<endl;
//	}
//	Point(Point &z){
//		x=z.x;
//		y=z.y;
//		cout<<"Point���캯��2("<<x<<","<<y<<")"<<endl;
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
//		//<����>(�β��б�0):��Ƕ����1(�β��б�2),��Ƕ����2(�β��б�3)...{}
//		cout<<"Rectangle���캯��1\n";
//	}
//	myRectangle(Point A,Point B):lefttop(A),rightbottom(B){
//		cout<<"Rectangle���캯��2\n";
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
//	Date *r;//��ָ�������ָ����ʽһ�����÷�һ����Ϊ  <����> *<����ָ����>
//	r=&tomorrow;//ָ��ĸ�ֵҲ�����һ����
//	int *p,*q;
//	p=&today.day;//ָ�����Ա��ָ��
//	q=&(r->day);
//
//	void (Date:: *o)();//ָ���Ա������ָ�롣��ʽΪ  <��������>  (<����>::*<ָ�������>)(�����б�)
//	o=&Date::show;//��ֵ��ʽ����ʽΪ<ָ�������>=<����>::<��Ա������>;
//	*p=25;
//	*q=28;
//	(*r).show();//�ܺ�ʹ�ã���ָ�����ָ��
////	today.show();
//	(today.*o)();//ָ���Ա������ָ���ʹ����ʽ��
//	return 0;
//}

//int main(){
//	int p=4453,q=5767;
//	int tmp1,c,d;
//	if(p<q){//��֤pһ������q
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
	cout<<"������ʵ�ַ����ļӷ�������\n";
	f1.show();
	cout<<"+";
	f2.show();
	f3=f1.add(f2);
	cout<<"=";
	f3.show();
	while(1){
		cout<<"\n��ֱ��������������ķ��Ӻͷ�ĸ����ĸΪ0ʱ�˳�\n";
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
