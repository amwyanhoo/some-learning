#include <iostream>
//#include "fraction.h"
//#include "StuInfo.h"
#include <cmath>
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
//
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
//
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
//
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
//
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
//
//int main(){
//	Fraction f1(1,4),f2(5,6),f3;
//	int a,b,c,d;
//	cout<<"������ʵ�ַ����ļӷ�������\n";
//	f1.show();
//	cout<<"+";
//	f2.show();
//	f3=f1.add(f2);
//	cout<<"=";
//	f3.show();
//	while(1){
//		cout<<"\n��ֱ��������������ķ��Ӻͷ�ĸ����ĸΪ0ʱ�˳�\n";
//		cin>>a>>b;
//		cin>>c>>d;
//		if(b==0||d==0){
//			break;
//		}
//		f1.set(a,b);
//		f2.set(c,d);
//		f1.show();
//		cout << "+";
//		f2.show();
//		f3 = f1.add(f2);
//		cout << "=";
//		f3.show();
//	}
//}
//
//��7.6.1
//int main(){
//
//	StuInfo tongxin[5];
//	int I;
//	char nam[10];
//	float p,n,d;
//	for(int i=0;i<5;i++){
//		cout<<"�������"<<i+1<<"��ѧ��Id,���������ſεĳɼ�\n";
//		cin>>I>>nam>>p>>n>>d;
//		tongxin[i].set(I,nam,p,n,d);
//	}
//	tongxin[0].sort(tongxin,5);
//	cout<<"ѧ��\t����\t����ɼ�\t����ɼ�\t���ݿ�ɼ�\t�ܳɼ�\n";
//	for(int i=0;i<5;i++){
//		cout<<"------------------------------\n";
//		tongxin[i].show();
//		cout<<endl;
//	}
//	cout << "------------------------------\n";
//	//�ж��Ƿ����85.
//	for(int i=0;i<5;i++){
//		if(tongxin[i].Isbig(85)){
//			tongxin[i].show();
//			cout<<endl;
//		}
//	}
//	return 0;
//}


//eg7-9

class Date{
private:
	int year,month,day;
	bool IsLeapyear();
	bool IsEndofMonth();
	void IncDay();
public:
	int DayCalc();
	Date(int y=1900,int m=1,int d=1);
	void SetDate(int yy,int mm,int dd);
	void AddDay(int);
	int Daysof2Date(Date ymd);
	void print_ymd();
	void print_mdy();
};


Date::Date(int y,int m,int d){//��ס�����캯��ֱ�ӵ������ú�����
	SetDate(y,m,d);
}
void Date::SetDate(int yy,int mm,int dd){
	month=((mm>=1&&mm<12)?mm:1);
	year=(yy>=1900)?yy:1900;
	//year=yy;
	switch(month){
	case 4:
	case 6:
	case 9:
	case 11:
		day=(dd>=1&&dd<=30)?dd:1;
		break;
	case 2:
		if(IsLeapyear()){
			day=(dd>=1&&dd<=29)?dd:1;
		}else {
			day=(dd>=1&&dd<=28)?dd:1;
		}
		break;
	default:
		day=(dd>=1&&dd<=31)?dd:1;

	}
}

bool Date::IsLeapyear(){
	if(((year%4==0)&&(year%100!=0))||(year%400==0)){//�����ж�����
		return 1;
	}else {
		return 0;
	}
}

bool Date::IsEndofMonth() {//��ĩ�ж�
	switch (month) {
	case 4:
	case 6:
	case 9:
	case 11:
		return (day == 30);
		break;
	case 2:
		if (IsLeapyear()) {
			return (day==29);
		} else {
			return (day==28);
		}
		break;
	default:
		return (day==31);
	}
}

void Date::IncDay(){//������1�Ĵ�����
	if(IsEndofMonth()){
		if(month==12){//��ĩ�����һ�죬��12��31��ʱ
			day=1;
			month=1;
			year++;
		} else {//�������һ��
			day = 1;
			month++;
		}
	} else {
		day++;
		}
}

void Date::AddDay(int days){
	/*
	 * �˴�Ϊ��������������ڵĺ�����˼��Ϊ
	 * ��ʵ��1�������ڣ�ͨ��ѭ�����ã�����N�������ڡ�*/
	for(int i=0;i<days;i++){
		IncDay();
	}
}

int Date::DayCalc(){
	/*
	 * ������������֮��ļ������˼�룺
	 * �ȷֱ�������������빫Ԫ1�������������������������������
	 * */
	int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int yy,leaps,days,i;
	yy=year-1;
	days=yy*365;
	leaps=yy/4-yy/100+yy/400;//���㹫Ԫ1-1-1����������������
	days+=leaps;//����ʱ��������1

	if(IsLeapyear()){
		monthdays[2]=29;
	}
	for(i=1;i<month;i++){
		days+=monthdays[i];
	}
		days+=day;
		return days;
}

int Date::Daysof2Date(Date oneday){
	int days;
	days=abs(DayCalc()-oneday.DayCalc());
	return days;
}

void Date::print_ymd(){
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}

void Date::print_mdy(){
	char *monthName[13]={"","January","February","March","April","May","June","July","August","September",
			"October","Novenber","December"};
	cout<<monthName[month]<<" "<<day<<","<<year<<endl;
}

//---------------main function-------------------------
//�����У����������������ڣ���������������������
int main(){
	Date date1;
	int year,month,day;
	int N;

	date1.SetDate(2013,1,27);
	cout<<"��������ʾ���ڵļ���\n";
	cout<<"the current date is :"<<endl;
	date1.print_ymd();
//	date1.print_mdy();
//	date1.AddDay(100);
//	date1.print_ymd();
	Date date2(2008,8,24);
//
//	cout<<"And before "<<date1.Daysof2Date(date2);
//	cout<<" days,the Beijing Olympic Game had been over."<<endl;

//�����������������������������������������û��������ݡ���������������������������������������
//	cout<<"������������\n";
//	cin>>year>>month>>day;
//	cout<<"����������\n";
//	cin>>N;

//	date1.SetDate(year,month,day);
//	cout<<"the date you input is :"<<endl;
//	date1.print_ymd();
//	date1.AddDay(N);
//	cout<<"After "<<N<<" days, the date is: ";
//	date1.print_ymd();
//	cout<<endl;

	cout<<"�������һ������\n";
	cin>>year>>month>>day;
	date1.SetDate(year,month,day);
	cout<<"������ڶ�������\n";
	cin>>year>>month>>day;
	date2.SetDate(year,month,day);
	cout<<"�������ڼ������Ϊ�� ";
	cout<<date1.Daysof2Date(date2)<<endl;

	return 0;
}
