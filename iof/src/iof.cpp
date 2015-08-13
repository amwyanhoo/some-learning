#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//int main() {
//	char c;
//	cout<<"enter a sentence:"<<endl;
//	cin.get(c); //输入内容，按enter键之后变成输入流，
//	while(1){
//		cout<<c;
//		cin.get(c);
//		if(c=='\n'){
//			break;
//		}
//	}
//	return 0;
//}

//一次提取多个字符
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

//用流对象的成员函数控制输出。
//int main(){
//	cout.setf(ios::right|ios::showpoint);//设置右对齐，以一般实数方式显示
//	cout.precision(5);//设置除小数点外有效数字为5
//	cout<<123.456789<<endl;
//	cout.width(10);//设置区域宽为10
//	cout.fill('*');//在显示区域处用*填充
//	cout.unsetf(ios::right);//清除状态右对齐
//	cout.setf(ios::left);//设置左对齐
//	cout<<123.456789<<endl;
//	return 0;
//}

//用C++控制符控制输出格式
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

//文本文件的读写
int main(){
//	ofstream out("file.txt");
//	if(!out){
//		cout<<"打开文件失败！"<<endl;
//		return 1;
//	}
//	//写文件
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
//		cout<<"不可打开文件"<<endl;
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

	char ch[20];
	int math,eng,phy;
	ifstream fin("file.txt");
	ofstream fout;
	cout<<"输入结果文件名：";
	cin>>ch;
	fout.open(ch,ios::app|ios::out);
	if(!fin||!fout){
		cout<<"不可打开的文件"<<endl;
		return 1;
	}
	while(fin){//邮于文件的行数是未知的，所以需要循环读取，直到文件结束
		fin>>ch>>math>>eng>>phy;
		if(fin){
			float avg=1.0*(math+eng+phy)/3;
			fout<<ch<<'\t'<<math<<'\t'<<eng<<'\t'<<phy<<'\t'<<setiosflags(ios::fixed)
					<<setprecision(2)<<avg<<endl;
		}
	}
	fin.close();
	fout.close();
	cout<<"已经保存，请查阅";
	return 0;
}
