#include <iostream>
#include <windows.h>
using namespace std;

class CLOCK{//class <����>
private://<�����޶���>������private�⣬����public,protected
	int Hour;//��Ա�б�������������ơ�
	int Minute;
	int Second;
public://��Ա���������޶�������һ�㺯��������ͬ��
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
void CLOCK::Run(){//<��������><������>::<������>(<�β��б�>){<������>}
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
