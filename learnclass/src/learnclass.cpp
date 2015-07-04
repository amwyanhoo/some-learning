#include <iostream>
#include <windows.h>
using namespace std;

class CLOCK{//class <类名>
private://<访问限定符>：，除private外，还有public,protected
	int Hour;//成员列表，与变量声明类似。
	int Minute;
	int Second;
public://成员函数访问限定符，与一般函数定义相同。
	void Set(int h,int m,int s){
		Hour=h;
		Minute=m;
		Second=s;
	}
	void Run();
	void Show(){
		cout<<Hour<<":"<<Minute<<":"<<Second;
	}
};
void CLOCK::Run(){//<返回类型><所属类>::<函数名>(<形参列表>){<函数体>}
	int i=0;
	for(i=0;i<10;i++){
		Second++;
		if(Second==60){
			Second=0;
			Minute++;
			if(Minute==60){
				Minute=0;
				Hour++;
				if(Hour==24){
					Hour=0;
				}
			}
		}
		cout<<'\r';
		Sleep(1000);
		Show();
	}
}
int main() {
	CLOCK c1;
	c1.Set(0,0,0);
	c1.Show();
	c1.Run();
	c1.Set(1,1,30);
	c1.Run();
	cout<<endl;
	c1.Show();
	return 0;
}
