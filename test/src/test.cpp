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

//	double area(double r);//�Ӻ�����ʹ��ʱҪ����������
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
/********return���ض��ֵ�������㷨************/
//	int a,b,c;
//	cin>>a>>b>>c;
//	sort(a,b,c);
//
//	char c='#';
//	int n=5,m=20;
//	cout<<"��������������������ɾ��ε��ַ�\n";
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
//	cout<<"���������鳤��\n";
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int m;
//	cout<<"��������ʼ����\n";
//	cin>>m;
//	if(m>=n){
//		cout<<"�Բ�������������������С��"<<n<<"������";
//	}
//	cout<<msum(a,n,2);
//	int d[]={10,89,8,23,9,11,559,25};
//	print(d,8);
//	cout<<endl;
//	sort(d,8);
//	print(d,8);
//
//	int y;
//	cout<<"������һ��������"<<endl;
//	cin>>y;
//	cout<<fact(y);
//
//	int m;
//	cout<<"���������Ӹ�����"<<endl;
//	cin>>m;
//	cout<<"�ƶ�"<<m<<"�����ӵĹ������£�"<<endl;
//	hanoi(m,'A','B','C');
//	int n;
//	cout<<"������һ����������\n";
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
//	//ð�������㷨
//	for(int i=3;i>0;i--){
//		for(int j=0;j<i-1;j++){//j<i��ʽ�ı��ʽʵ�ֽ���������
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
//		for (int j = 0; j < i - 1; j++) { //j<i��ʽ�ı��ʽʵ�ֽ���������
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
////�ݹ�ʵ�ֵĽ׳��㷨
//int fact(int n){
//	int y;
//	if(n==0||n==1){
//		y=1;
//	}else{
//		y=n*fact(n-1);//�ݹ�һ�������ƵĽṹ
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


//쳲���������
int fib(int n){
	int y;
	if(n==0||n==1){
		y=1;
	}else{
		y=fib(n-1)+fib(n-2);
	}
	return y;
}
