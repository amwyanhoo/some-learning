#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

//int main() {
//	char c;
//	cout<<"enter a sentence:"<<endl;
//	cin.get(c); //�������ݣ���enter��֮������������
//	while(1){
//		cout<<c;
//		cin.get(c);
//		if(c=='\n'){
//			break;
//		}
//	}
//	return 0;
//}

//һ����ȡ����ַ�
//int main(){
//	char ch;
//	cout<<"enter a sentence:"<<endl;
//	cin.get(ch);
//	cout<<ch<<endl;
//	cin.ignore(1);
//	cin.get(ch,3);
//	cout<<ch<<endl;
//	cout<<cin.peek();
//	return 0;
//}

//��������ĳ�Ա�������������
//int main(){
//	cout.setf(ios::right|ios::showpoint);//�����Ҷ��룬��һ��ʵ����ʽ��ʾ
//	cout.precision(5);//���ó�С��������Ч����Ϊ5
//	cout<<123.456789<<endl;
//	cout.width(10);//���������Ϊ10
//	cout.fill('*');//����ʾ������*���
//	cout.unsetf(ios::right);//���״̬�Ҷ���
//	cout.setf(ios::left);//���������
//	cout<<123.456789<<endl;
//	return 0;
//}

//��C++���Ʒ����������ʽ
//int main(){
////	int a=129;
////	cout<<"dec:"<<dec<<a<<endl;
////	cout<<"hex:"<<hex<<a<<endl;
////	cout<<"oct:"<<oct<<a<<endl;
//	char pt[]="xi'an";
//	cout<<setw(10)<<pt<<endl;
//	cout<<setw(10)<<setfill('*')<<pt<<endl;
//	double B=27.12356777887;
//	cout<<setiosflags(ios::scientific)<<setprecision(8);
//	cout<<B;
//
//	return 0;
//}

//�ı��ļ��Ķ�д

//class Student{
//		char Name[10];
//		char Class[10];
//		char Sex;
//		int Age;
//	public:
//		Student(){};
//		Student(char *Name,char *Class,char sex,int age){
//			strcpy(this->Name,Name);
//			strcpy(this->Class,Class);
//			this->Sex=sex;
//			this->Age=age;
//		}
//		void showMe(){
//			cout<<Name<<'\t'<<Class<<'\t'<<Sex<<'\t'<<Age<<endl;
//		}
//	};
//int main(){
//	ofstream out("file.txt");
//	if(!out){
//		cout<<"���ļ�ʧ�ܣ�"<<endl;
//		return 1;
//	}
//	//д�ļ�
//	cout<<"welcom to";
//	char ch[]="Xi'an Jiaotong University.";
//	int i=0;
//	while(ch[i]!=0){
//		out.put(ch[i]);
//		i++;
//	}
//	out.close();
//
//	ifstream in("file.txt");
//	if(!in){
//		cout<<"���ɴ��ļ�"<<endl;
//		return 1;
//	}
//	char ch[80];
//	in>>ch;
//	cout<<ch;
//	in>>ch;
//	cout<<ch;
//	while(in){
//		char c=in.get();
//		if(in){
//			cout<<c;
//		}
//	}
//	in.close();
//
//	char ch[20];
//	int math,eng,phy;
//	ifstream fin("file.txt");
//	ofstream fout;
//	cout<<"�������ļ�����";
//	cin>>ch;
//	fout.open(ch,ios::app|ios::out);
//	if(!fin||!fout){
//		cout<<"���ɴ򿪵��ļ�"<<endl;
//		return 1;
//	}
//	while(fin){//�����ļ���������δ֪�ģ�������Ҫѭ����ȡ��ֱ���ļ�����
//		fin>>ch>>math>>eng>>phy;
//		if(fin){
//			float avg=1.0*(math+eng+phy)/3;
//			fout<<ch<<'\t'<<math<<'\t'<<eng<<'\t'<<phy<<'\t'<<setiosflags(ios::fixed)
//					<<setprecision(2)<<avg<<endl;
//		}
//	}
//	fin.close();
//	fout.close();
//	cout<<"�Ѿ����棬�����";
//
//	Student stu[3]={
//			Student("��С��","����11",'m',27),
//			Student("������","��е01",'f',24),
//			Student("���Ļ�","����12",'m',39),
//	};
//	ofstream file1("file.txt",ios::binary);
//	if(!file1){
//		cout<<"�ļ���ʧ�ܣ�";
//		return 1;
//	}
//	//д�ļ�
//	for(int i=0;i<3;i++){
//		file1.write((char *)&stu[i],sizeof(stu[i]));//��stu[i]�ĵ�ַǿ��ת��Ϊchar��ָ��
//		file1.close();
//	}
//	Student stu2;
//	ifstream fin("file.dat",ios::binary);
//	while(!fin){
//		fin.read((char *)&stu2,sizeof(stu2));//����ԭ��Ϊistream &read(const char *buffer,int len);
//		if(fin){
//			stu2.showMe();
//		}
//	}
/*
 Student stu;
 ifstream file("file.dat",ios::binary);
 if(!file){
 return 1;
 }
 file.seekg(0,ios::end);
 int len = file.tellg();
 for(int k=len/sizeof(stu)-1;k>=0;k--){
 file.seekg(k*sizeof(stu));
 file.read((char *)&stu,sizeof(stu));
 stu.showMe();
 }
 file.close();
 return 0;
 }*/

int main() {
//	bool i;
//	int b=21;
//	i=b;
//	cout<<i;
//	int arr[]={6,7,8,9,10};
//	int *ptr=arr;
//	*(ptr++)+=123;
//	cout<<*(ptr)<<" "<<*(++ptr);
//	return 0;

	float a = 1.0f;
	cout << sizeof(a) << endl;
	cout << sizeof((int) a) << endl;
	cout << (int *) &a << endl; //ָ�����һ����ַ����int*)�������ǽ���ߵı���ת��Ϊһ��ָ��������������Ķ������Ϊ
	//����,�����int����*��&a)��ֵ�����ͣ�Ҳ������ָ��ĵ�ַ��װ��ֵ������
	return 0;
}

