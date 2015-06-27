#include <iostream>
using namespace std;

//void swap(int &,int &);
//
//
//void sort(int &a,int &b,int &c);
//
//
//
//void sort(int d[], int n);
//void print(int d[],int n);
//
//int fact(int n);
//void hanoi(int n,char a,char b,char c);

int fib(int n);

int main() {

//	double area(double r);//子函数在使用时要进行声明！
//	double r;
//	cin>>r;
//	if(r>0){
//		cout<<"circle's area is "<<area(r);
//	}else{
//		cout<<"your input is error";
//	}
//	int n;
//	char c;
//	cin>>n>>c;
//	display(n,c);
//	for(int i=1;i<9;i++){
//		display(i,'*');
//	}
//	display(10,'a');
//	int a=5,b=10;
//	cout<<"a="<<a<<" b="<<b<<endl;
//	swap(a,b);
//	cout<<"a="<<a<<" b="<<b<<endl;
/********return返回多个值的排序算法************/
//	int a,b,c;
//	cin>>a>>b>>c;
//	sort(a,b,c);
//
//	char c='#';
//	int n=5,m=20;
//	cout<<"请输入行数，列数和组成矩形的字符\n";
//	cin>>n>>m>>c;
//	rectangle(n,m,c);
//	cout<<endl;
//	rectangle(n,m);
//	cout<<endl;
//	rectangle(n);
//	cout<<endl;
//	rectangle();
//	cout<<endl;
//
//	int n;
//	cout<<"请输入数组长度\n";
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int m;
//	cout<<"请输入起始数据\n";
//	cin>>m;
//	if(m>=n){
//		cout<<"对不起，您输入有误，请输入小于"<<n<<"的数字";
//	}
//	cout<<msum(a,n,2);
//	int d[]={10,89,8,23,9,11,559,25};
//	print(d,8);
//	cout<<endl;
//	sort(d,8);
//	print(d,8);
//
//	int y;
//	cout<<"请输入一个正整数"<<endl;
//	cin>>y;
//	cout<<fact(y);
//
//	int m;
//	cout<<"请输入盘子个数："<<endl;
//	cin>>m;
//	cout<<"移动"<<m<<"个盘子的过程如下："<<endl;
//	hanoi(m,'A','B','C');
//	int n;
//	cout<<"请输入一个正整数：\n";
//	cin>>n;

	for(int i=0;i<30;i++){
		cout<<fib(i)<<"\t";
		if(fib(i)%5==0){
			cout<<endl;
		}
	}
	return 0;
}


//void swap(int &m,int &n){
//	int t=m;
//	m=n;
//	n=t;
//}
//void sort(int &a,int &b,int &c){
//	int tmp,d[3];
////	for(int i=0;i<3;i++){
////		d[i]
////	}
//	d[0]=a;
//	d[1]=b;
//	d[2]=c;
//	//冒泡排序算法
//	for(int i=3;i>0;i--){
//		for(int j=0;j<i-1;j++){//j<i样式的表达式实现阶梯形行列
//			if(d[j]>d[j+1]){
//				tmp=d[j];
//
//				d[j]=d[j+1];
//				d[j+1]=tmp;
//			}
//		}
//	}
//	for(int i=0;i<3;i++){
//		cout<<d[i]<<endl;
//	}
//}
//
//void print(int d[],int n);
//void sort(int d[], int n) {
//	for (int i = n; i > 0; i--) {
//		for (int j = 0; j < i - 1; j++) { //j<i样式的表达式实现阶梯形行列
//			if (d[j] > d[j + 1]) {
//				int tmp;
//				tmp = d[j];
//				d[j] = d[j + 1];
//				d[j + 1] = tmp;
//			}
//			cout<<"i="<<i<<" j="<<j<<"	";
//			print(d, 8);
//		}
//		cout<<endl;
//	}
//}
//
//void print(int d[],int n){
//	for (int i = 0; i < n; i++) {
//		cout << d[i]<<" ";
//	}
//	cout<< endl;
//}
//
////递归实现的阶乘算法
//int fact(int n){
//	int y;
//	if(n==0||n==1){
//		y=1;
//	}else{
//		y=n*fact(n-1);//递归一定有类似的结构
//	}
//	return y;
//}
//
//void move(char x ,char y);
//void hanoi(int n,char a,char b,char c){
//	 if(n==1){
//		 //cout<<a<<"-->"<<c<<endl;
//		 move(a,c);
//	 }else{
//		 hanoi(n-1,a,c,b);
//		 //cout<<a<<"-->"<<c<<endl;
//		 move(a,c);
//		 hanoi(n-1,b,a,c);
//	 }
// }
//
//
// void move(char x ,char y){
//	 cout<<x<<"-->"<<y<<endl;
// }
//double area(double r){
//	double s;
//	s=3.14*r*r;
//	return s;
//}
//void display(int n,char c){
//	for(int i=0;i<n;i++){
//		cout<<c<<" ";
//	}
//	cout<<endl;
//}void rectangle(int x=5,int y=10,char c='*'){
//	int i,j,k;
//	for(i=0;i<y;i++){
//		cout<<c;
//	}
//	cout<<endl;
//	for(j=1;j<x-1;j++){
//		cout<<c;
//		for(k=1;k<y-1;k++){
//			cout<<" ";
//		}
//		cout << c << endl;
//	}
//	for(i=0;i<y;i++){
//		cout<<c;
//	}
//	cout<<endl;
//}
//
//int msum(int a[],int n,int m){
//	int sum=0;
//	for(int i=m-1;i<n;i++){
//		sum+=a[i];
//	}
//	return sum;
//}


//斐波那契序列
int fib(int n){
	int y;
	if(n==0||n==1){
		y=1;
	}else{
		y=fib(n-1)+fib(n-2);
	}
	return y;
}
