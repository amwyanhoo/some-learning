#include <iostream>
//#include "fraction.h"
//#include "StuInfo.h"
#include <cmath>
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
//
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
//
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
//
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
//
//int main(){
//	Fraction f1(1,4),f2(5,6),f3;
//	int a,b,c,d;
//	cout<<"本程序实现分数的加法，例如\n";
//	f1.show();
//	cout<<"+";
//	f2.show();
//	f3=f1.add(f2);
//	cout<<"=";
//	f3.show();
//	while(1){
//		cout<<"\n请分别输入两个分数的分子和分母，分母为0时退出\n";
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
//例7.6.1
//int main(){
//
//	StuInfo tongxin[5];
//	int I;
//	char nam[10];
//	float p,n,d;
//	for(int i=0;i<5;i++){
//		cout<<"请输入第"<<i+1<<"个学生Id,姓名，三门课的成绩\n";
//		cin>>I>>nam>>p>>n>>d;
//		tongxin[i].set(I,nam,p,n,d);
//	}
//	tongxin[0].sort(tongxin,5);
//	cout<<"学号\t姓名\t程序成绩\t网络成绩\t数据库成绩\t总成绩\n";
//	for(int i=0;i<5;i++){
//		cout<<"------------------------------\n";
//		tongxin[i].show();
//		cout<<endl;
//	}
//	cout << "------------------------------\n";
//	//判断是否大于85.
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


Date::Date(int y,int m,int d){//记住，构造函数直接调用设置函数！
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
	if(((year%4==0)&&(year%100!=0))||(year%400==0)){//闰年判断条件
		return 1;
	}else {
		return 0;
	}
}

bool Date::IsEndofMonth() {//月末判断
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

void Date::IncDay(){//天数加1的处理方法
	if(IsEndofMonth()){
		if(month==12){//年末的最后一天，即12月31日时
			day=1;
			month=1;
			year++;
		} else {//当月最后一天
			day = 1;
			month++;
		}
	} else {
		day++;
		}
}

void Date::AddDay(int days){
	/*
	 * 此处为计算若干天后日期的函数，思想为
	 * 先实现1天后的日期，通过循环调用，计算N天后的日期。*/
	for(int i=0;i<days;i++){
		IncDay();
	}
}

int Date::DayCalc(){
	/*
	 * 计算两个日期之间的间隔天数思想：
	 * 先分别计算两个日期与公元1年相差的天数，两个相减就是相差的天数
	 * */
	int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int yy,leaps,days,i;
	yy=year-1;
	days=yy*365;
	leaps=yy/4-yy/100+yy/400;//计算公元1-1-1以来经过的闰年数
	days+=leaps;//闰年时总天数加1

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
//功能有：计算若干天后的日期，计算两个日期相差的天数
int main(){
	Date date1;
	int year,month,day;
	int N;

	date1.SetDate(2013,1,27);
	cout<<"本程序演示日期的计算\n";
	cout<<"the current date is :"<<endl;
	date1.print_ymd();
//	date1.print_mdy();
//	date1.AddDay(100);
//	date1.print_ymd();
	Date date2(2008,8,24);
//
//	cout<<"And before "<<date1.Daysof2Date(date2);
//	cout<<" days,the Beijing Olympic Game had been over."<<endl;

//————————————————————用户输入数据————————————————————
//	cout<<"请输入年月日\n";
//	cin>>year>>month>>day;
//	cout<<"请输入天数\n";
//	cin>>N;

//	date1.SetDate(year,month,day);
//	cout<<"the date you input is :"<<endl;
//	date1.print_ymd();
//	date1.AddDay(N);
//	cout<<"After "<<N<<" days, the date is: ";
//	date1.print_ymd();
//	cout<<endl;

	cout<<"请输入第一个日期\n";
	cin>>year>>month>>day;
	date1.SetDate(year,month,day);
	cout<<"请输入第二个日期\n";
	cin>>year>>month>>day;
	date2.SetDate(year,month,day);
	cout<<"两个日期间隔天数为： ";
	cout<<date1.Daysof2Date(date2)<<endl;

	return 0;
}
