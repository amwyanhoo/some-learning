#include <iostream>
//#include <cmath>
using namespace std;
enum Color{
	RED,YELLOW,BLUE,WHITE,BLACK
};
enum Week{
	Sun=7,Mon=1,Tes,Wed,Thu,Fri,Sat
};
int main() {
//
//	int t;
//	char a;
//	t=int('a')-int('A');
////	cout<<t;
//	cin>>a;
//	cout<<char(int(a)-t);

//	int a=16;
//	cout<<hex<<a;

//冒泡法排序
//	int a[3],i,j,tmp;
//	for(i=0;i<3;i++){
//		cin>>a[i];
//	}
//	for(i=0;i<3-1;i++){
//		for(j=0;j<3-1-i;j++){
//			if(a[j]>a[j+1]){
//				tmp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tmp;
//			}
//		}
//	}
////	for(i=0;i<3;i++){
////		cout<<a[i]<<" ";
////	}
//	cout<<a[2];

//2.分段函数
//	double x,y;
//	while(1){
//		cin>>x;
//		if(x<0){
//			y=pow(x,2);
//		}else{
//			y=x*x*x+2*x*x+x;
//		}
//		cout<<y<<endl;
//	}

//3计算1+2+3+……n
//	int n,i,sum=0;
//	cin>>n;
//	for(i=0;i<n+1;i++){
//		sum+=i;
//	}
//	cout<<sum;

//4阶乘
//	long double n,i,div=1;
//	cin>>n;
//	for (i = 1; i < n + 1; i++) {
//		//cout<<div<<"*"<<i<<endl;
//		div *= i;
//	}
//	cout << div << endl;

//奇数和;
//	int n,i,sum=0;
//	cin >> n;
//	for (i = 1; i < 2*n; i=i+2) {
//		sum += i;
//	}
//	cout << sum;

//乘法表
//	int i, j;
//	for (i = 1; i < 10; i++) {	//外循环控制行
//		for (j = 1; j <= i; j++) {	//内循环控制列
//			if((i==3||i==4)&&(j==4||j==2)){
//			cout << j << "×" << i << "=" << j * i<<"  ";
//			}else
//			cout << j << "×" << i << "=" << j * i<<" ";
//		}
//		cout << endl;
//	}

//	//15猴子吃桃问题
//	int tmp=0;
//	int i,j;
//	for(i=1;i<2000;i++){
//		for(j=1;j<10;j++){
//			tmp+=(i+2)/(pow(2,j));
//		}
//		if(i==tmp+1){
//			cout<<"猴子第一天摘了"<<i<<"个桃子";
//		}
//	}

//	int i,a=1;
//	for(i=9;i>0;i--){
//		a+=(a+1)*2;
//	}
//	cout<<a;

//	int i;
//	int j;
//	for(i=1;i<99999;i++){
//		float tmp=0.0f;
//		for(j=1;j<10;j++){
//			//tmp1=(i+2)/(pow(2,j));
//			tmp += (i + 2) / (pow(2, j));
//			}
//		if((i*1.0f)==(tmp+3)){
//			cout<<i<<endl;
//		}
//	}

//	//杨辉三角
//	int i,j;
//	for(i=1;i<=10;i++){
//		for(j=1;j<=i;j++){
//			cout<<j;
//		}
//	}

	//int mon[12]={1,2,3,4,5,6,7,8,9,10,11,12};
//	char month[12][10]={"January","February","March","April","May","June",
//			"July","August","September","October","November","December"};
//	int m;
//	while(1){
//		cin >> m;
//		if(m>0&&m<13){
//			cout << month[m - 1] << endl;
//		}
//	}

	//枚举变量的使用规则演示


	return 0;
}
