//#include <iostream>
//#include <cstring>
//using namespace std;
//
////—————————————基类———————————————
//class Mobile{
//private:
//	char mynumber[11];
//public:
//	void init(char number[11]);
//	void dial(char *);
//	void answer(char othernumber[11]);
//	void hangup(){
//		cout<<"Hanging Up..."<<endl;
//	}
//	void show(){
//		cout<<"my number is "<<mynumber<<endl;
//	}
//};
//
//void Mobile::init(char number[11]="00000000000"){
//	strcpy(mynumber,number);
//}
//
//void Mobile::dial(char *number){
//	cout<<"Dialing number is "<<number<<endl;
//	cout<<"Dialing on..."<<endl;
//}
//
//void Mobile::answer(char othernumber[11]){
//	cout<<"Answering number is "<<othernumber<<endl;
//	cout<<"Answer in ..."<<endl;
//}
//
//
////———————————————派生类——————————————————
//class SmartPhone:public Mobile{
//private:
//	char os[20];
//	int memory;
//public:
//	void init(char num[11],char *os,int mem);
//	void send(char othernumber[11],char message[150]);
//	void showmemory();
//	void show();
//};
//
//void SmartPhone::init(char num[11],char *os,int mem){
//	Mobile::init(num);
//	strcpy(this->os,os);
//	this->memory=mem;
//}
//
//void SmartPhone::send(char othernumber[11],char message[150]){
//	cout<<"Sending message"<<message<<"to"<<othernumber<<endl;
//	cout<<"Sending on";
//}
//
//void SmartPhone::showmemory(){
//	cout<<"Memory is :"<<memory<<"MB"<<endl;
//}
//
//void SmartPhone::show(){
//	cout<<"----Info of this phone----\n";
//	cout<<"OS is "<<os<<endl;
//	cout<<"Memory is: "<<memory<<"MB"<<endl;
//	Mobile::show();
//}
//
////——————main function——————————————
//int main(){
//	Mobile ctec;
//	SmartPhone csat;
//
//	cout<<"----Mobile Phone ctec-----\n";
//	ctec.init("1327581890");
//	ctec.dial("1332021567");
//	ctec.answer("1392201672");
//	ctec.hangup();
//
//	//派生对象功能
//	cout<<"----smart phone csat----\n";
//	csat.init("1321101101","Android",768);
//	csat.send("1331101102","hello!");
//	csat.dial("1301101103");
//	csat.hangup();
//	csat.Mobile::show();
//
//
//	return 0;
//}


//基类和内嵌对象的初始化方法
//
/*
 * 派生类的构造函数一般格式为：
 * <派生类名>::<派生类名>(<参数表>):<基类名1>(<参数表1>,...,<基类名n>(<参数表n>),
 * 		<内嵌对象名1>(<内嵌对象参数列表1>,...,<内嵌对象名m>(<内嵌对象参数表m>){
 * 			派生类新增成员的初始化语句;
 * 		}
 *
 * 冒号后的写法是构造函数的参数列表中列出所有的基类和内嵌对象以
 * 及本类其他成员所需的参数，其后在参数列表的右圆括号后加冒号“:”
 * 之后列出基类名、内嵌对象名及参数。各项之间用逗号隔开，
 * */
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
////_________类的定义_________
//class Position{
//private:
//	int x,y;
//public:
//	Position(int x0=0,int y0=0){
//		x=x0;
//		y=y0;
//	}
//	void show(){
//		cout<<x<<" "<<y;
//	}
//	~Position(){
//		cout<<"Position析构函数正在执行……"<<x<<" "<<y<<endl;
//	}
//};
//
//class Button{
//	Position a;
//	char name[20];
//public:
//	Button(char *name,int x0,int y0):a(x0,y0){	//内嵌对象的初始化方法：<类名>(<所有参数表包括新增的成员，以及内嵌对象的成
//												//员>):<内嵌对象名>(<内嵌对象参数表)>
//		strcpy(this->name,name);
//	}
//	void show(){
//		cout<<name<<endl;
//		cout<<"Position ";
//		a.show();
//		cout<<endl;
//	}
//	~Button(){
//		cout<<"Button 析构函数正在执行……"<<name<<endl;
//	}
//};
//
//class Window{
//	char name[30];
//	Position a;
//	int width,heigth;
//public:
//	Window(char *name,int x0,int y0,int w,int h):a(x0,y0){
//		strcpy(this->name,name);
//		this->width=w;
//		this->heigth=h;
//	}
//	void show(){
//		cout<<name<<endl;
//		cout<<"Position ";
//		a.show();
//	}
//	~Window(){
//		cout<<"Wintdow析构函数正在执行……"<<name<<endl;
//	}
//};
//
//class Dialogue:public Window{
//	char text[50];
//	Button btn1;
//public:
//	Dialogue(	char *name,int x0,int y0,int w,int h,//所有数数表，基类需要的参数
//				char *namebtn,int xbtn,int ybtn,	//内嵌对象需要的参数
//				char *text /*派生类新增的成员所对应的参数*/):Window(name,x0,y0,w,h),//基类初始化方法，这儿为实参，不需再写类型，只需写名称就行
//				btn1(namebtn,xbtn,ybtn){//内嵌对象初始化，同上
//		strcpy(this->text,text);
//	}
//	void show(){
//		Window::show();//调用基类成员函数的方法：<基类名>::<成员函数名>()
//		cout<<"\nText: "<<text<<endl;
//		cout<<"Button: ";
//		btn1.show();
//	}
//	~Dialogue(){
//		cout<<"Dialogue析构函数正在执行……"<<text<<endl;
//	}
//};
//
////________main function________
//int main(){
//	Dialogue dge("Dialogue Window Demo",10,10,20,30,"OK",10,20,"dream...");
//	dge.show();
//	return	0 ;
//}


