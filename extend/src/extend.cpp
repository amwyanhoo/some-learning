//#include <iostream>
//#include <cstring>
//using namespace std;
//
////�����������������������������ࡪ����������������������������
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
////�����������������������������������ࡪ����������������������������������
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
////������������main function����������������������������
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
//	//����������
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


//�������Ƕ����ĳ�ʼ������
//
/*
 * ������Ĺ��캯��һ���ʽΪ��
 * <��������>::<��������>(<������>):<������1>(<������1>,...,<������n>(<������n>),
 * 		<��Ƕ������1>(<��Ƕ��������б�1>,...,<��Ƕ������m>(<��Ƕ���������m>){
 * 			������������Ա�ĳ�ʼ�����;
 * 		}
 *
 * ð�ź��д���ǹ��캯���Ĳ����б����г����еĻ������Ƕ������
 * ������������Ա����Ĳ���������ڲ����б����Բ���ź��ð�š�:��
 * ֮���г�����������Ƕ������������������֮���ö��Ÿ�����
 * */
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
////_________��Ķ���_________
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
//		cout<<"Position������������ִ�С���"<<x<<" "<<y<<endl;
//	}
//};
//
//class Button{
//	Position a;
//	char name[20];
//public:
//	Button(char *name,int x0,int y0):a(x0,y0){	//��Ƕ����ĳ�ʼ��������<����>(<���в�������������ĳ�Ա���Լ���Ƕ����ĳ�
//												//Ա>):<��Ƕ������>(<��Ƕ���������)>
//		strcpy(this->name,name);
//	}
//	void show(){
//		cout<<name<<endl;
//		cout<<"Position ";
//		a.show();
//		cout<<endl;
//	}
//	~Button(){
//		cout<<"Button ������������ִ�С���"<<name<<endl;
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
//		cout<<"Wintdow������������ִ�С���"<<name<<endl;
//	}
//};
//
//class Dialogue:public Window{
//	char text[50];
//	Button btn1;
//public:
//	Dialogue(	char *name,int x0,int y0,int w,int h,//����������������Ҫ�Ĳ���
//				char *namebtn,int xbtn,int ybtn,	//��Ƕ������Ҫ�Ĳ���
//				char *text /*�����������ĳ�Ա����Ӧ�Ĳ���*/):Window(name,x0,y0,w,h),//�����ʼ�����������Ϊʵ�Σ�������д���ͣ�ֻ��д���ƾ���
//				btn1(namebtn,xbtn,ybtn){//��Ƕ�����ʼ����ͬ��
//		strcpy(this->text,text);
//	}
//	void show(){
//		Window::show();//���û����Ա�����ķ�����<������>::<��Ա������>()
//		cout<<"\nText: "<<text<<endl;
//		cout<<"Button: ";
//		btn1.show();
//	}
//	~Dialogue(){
//		cout<<"Dialogue������������ִ�С���"<<text<<endl;
//	}
//};
//
////________main function________
//int main(){
//	Dialogue dge("Dialogue Window Demo",10,10,20,30,"OK",10,20,"dream...");
//	dge.show();
//	return	0 ;
//}

//�����
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Mobile{
//public:
//	char mynumber[11];
//	void show(){
//		cout<<"The phone is mobile"<<mynumber<<endl;
//	}
//};
//
//class MobileGsm:virtual public Mobile{
//public :
//	int memory;
//	void showmemory(){
//		cout<<"The memory of gsm is: "<<memory<<endl;
//	}
//};
//
//class MobileCdma:virtual public Mobile{
//public :
//	int memory;
//	void showmemory(){
//		cout<<"The memory of cdma is: "<<memory<<endl;
//	}
//};
//
//class MobileCell:public MobileGsm,public MobileCdma{
//public:
//	char os[10];
//	void showOs(){
//		cout<<"The OS of the phone is: "<<os<<endl;
//	}
//};
//
//int main(){
//	MobileCell Python1;
//	strcpy(Python1.os,"Android");
//	strcpy(Python1.mynumber,"13012100511");
//	Python1.MobileGsm::memory=2;
//	Python1.MobileCdma::memory=4;
//
//	Python1.show();
//	Python1.MobileGsm::showmemory();
//	Python1.MobileCdma::showmemory();
//	Python1.showOs();
//	return 0;
//}

//��8-7��ѧ������������˶ʿ������ʿ��
//#include <iostream>
//#include <cstring>
//using namespace std;
//class Student{
//	int stdno,age;
//	char name[10],classsname[10],schoolname[10];
//public:
//	Student(int stdno,char *name,int age,char *cname,char *sname){
//		this->stdno=stdno;
//		strcpy(this->name,name);
//		this->age=age;
//		strcpy(this->classsname,cname);
//		strcpy(this->schoolname,sname);
//	}
//	void show(){
//		cout<<"ѧ��ѧ�ţ�\t"<<this->stdno<<endl;
//		cout<<"ѧ��������\t"<<name<<endl;
//		cout<<"ѧ�����䣺\t"<<age<<endl;
//		cout<<"���ڰ༶��\t"<<this->classsname<<endl;
//		cout<<"����ѧУ��\t"<<this->schoolname<<endl;
//	}
//
//};
//
//class CollegeStudent : public Student{
//	char classteacher[20];
//public:
//	CollegeStudent(int stdno,char *name,int age,char *cname,char *sname,char *ctea):Student(
//			stdno,name,age,cname,sname){
//		strcpy(this->classteacher,ctea);
//	}
//	void show(){
//		Student::show();
//		cout<<"����Ա��\t"<<classteacher<<endl;
//	}
//};
//class GraduateStudent : public Student{
//	char tutor[20],projectname[20];
//public:
//	GraduateStudent(int stdno,char *name,int age,char *cname,
//			char *sname,char *tutor,char *pname):Student(
//			stdno,name,age,cname,sname){
//		strcpy(this->tutor,tutor);
//		strcpy(this->projectname,pname);
//	}
//	void show(){
//		Student::show();
//		cout<<"��ʦ���ƣ�\t"<<tutor<<endl;
//		cout<<"�������ƣ�\t"<<projectname<<endl;
//	}
//};
//class DoctorStudent : public Student{
//	char researchname[20];
//public:
//	DoctorStudent(int stdno,char *name,int age,char *cname,char *sname,char *rname):Student(
//			stdno,name,age,cname,sname){
//		strcpy(this->researchname,rname);
//	}
//	void show(){
//		Student::show();
//		cout<<"�о���Ŀ��\t"<<researchname<<endl;
//	}
//};
//
//int main(){
//	CollegeStudent cst(15150,"amwyanhoo",20,"IT","xupt","Lic");
//	cst.show();
//}

