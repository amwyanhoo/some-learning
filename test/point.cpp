#include <iostream>
using namespace std;

//struct student{
//	int stno;
//	char name[20];
//	int age;
//};
//void swap(int *,int *);
//
//int max(int x,int y);
//
//void inv(int *x,int n);
//
//int s_cmp(char *s,char *t);

//void fun(double r, double *area,double *len);
//void fun(double r, double &a,double &l);


int main() {
//	int a=4,*p;
//	p=&a;
//	cout<<a<<" "<<&a<<endl;
//	cout<<p<<" "<<&p<<endl;//pΪָ���������ȻҲ�е�ַ��������ֵ��Ϊָ�룬��һ����ַ��
//	cout<<*p<<endl;//���Խ�*pֱ�ӿ�������a������cout<<a�Ľ����һ���ġ�
//
//	int x=100;
// 	int *p1=&x;
//	int **p2=&p1;
//	cout<<&x<<endl;
//	cout<<&p1<<endl;
//	cout<<&p2<<endl;
//	cout<<x<<endl;
//	cout<<*p1<<endl;
//	cout<<**p2<<endl;
//
//	int a=5,b=10;
//	cout<<"a="<<a<<",b="<<b<<endl;
//	swap(&a,&b);
//	cout<<"a="<<a<<",b="<<b<<endl;
//
//	student stu={211123001,"Hong Yu",19};
//	void fun(student *);
//	fun(&stu);
//	cout<<stu.stno<<endl<<stu.name<<endl<<stu.age<<endl;
//
//	int a=10,b=20,c;
//	int (*p)(int,int);//����ָ������ָ�����p
//	p=max;//ָ�����pָ����max
//	c=(*p)(a,b);//ʹ��ָ�����p��ӵ��ú���max
//	cout<<"max="<<c<<endl;
//
//	int a[10]={1,2,3,4,5,6,7,8,9,10},i;
//	for(i=0;i<10;i++){
//		cout<<a[i]<<" ";
//	}
//	cout << endl;
//	for(i=0;i<10;i++){
//		cout<<*(a+i)<<" ";
//	}
//	cout<<endl;
//
//	int a[10]={1,2,3,4,5,6,7,8,9,10},*p,i;
//	p=a;
//	for(i=0;i<10;i++){
//		cout<<*(p+i)<<" ";
//	}
//	cout<<endl;
//	for(i=0;i<10;i++){
//		cout<<p[i]<<" ";
//	}
//	cout<<endl;
//	for(i=0;i<10;i++){
//		cout<<*p<<" ";
//		p++;
//	}
//	cout<<endl;
//
//	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
//	cout<<"����ǰ:";
//	for(i=0;i<10;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	inv(a,10);
//	cout<<"�����";
//	for(i=0;i<10;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//
//	int i;
//	char *str="computer";
//	cout<<*str<<endl;
//	for(i=0;str[i]!='\0';i++){
//		cout<<str[i];
//	}
//	cout<<endl;
//	for(i=0;*(str+i)!='\0';i++){
//		cout<<*(str+i);
//	}
//
//	//��д����ʵ�ֿ⺯��strcmp�Ĺ���
//	cout<<s_cmp("xyz","xyy")<<endl;
//	cout<<s_cmp("xyz","xyz")<<endl;
//	cout<<s_cmp("xyy","xyz")<<endl;
//
////	int *p;
//	int *p =new int(6) ;
////	*p=5;
//	cout<<p<<endl<<*p<<endl<<sizeof(p);
////	delete p;
//
//	int n,i;
//	cout<<"����������Ԫ�صĸ�����";
//	cin>>n;
//	int *p=new int [n];
////	for(i=0;i<n;i++){
////		p[i]=i;
////	}
////	for(i=0;i<n;i++){
////		cout<<p[i]<<" ";
////	}
//	delete []p;
//	int (*p)[20];
//	p=new int [N][20];
//	<ָ�����>= new <��������> [<Ԫ�ظ���>];
//
////	int i,a[3]={0,7,3},*p;
////	p=a;
////	for(i=0;i<3;i++){
////		cout<<p[i]<<" ";
////	}
//
//	double r,area,len;
//	cout<<"������Բ�İ뾶�� ";
//	cin>>r;
//	fun(r,area,len);
//	cout<<"area= "<<area<<endl;
//	cout<<"len= "<<len<<endl;
	
	
	return 0;
}

//void swap(int *p,int *q){
//	int t=*p;
//	*p=*q;
//	*q=t;
//}
//
//void fun(student *p){
//	//strcpy(p->name,"Wu Ping");
//	strcpy((*p).name,"WuPing");
//}
//
//int max(int x,int y){
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//void inv(int *x,int n){
//	int t,*i,*j;
//	i=x;
//	j=x+n-1;
//	for(;i<j;i++,j--){
//		t=*i;
//		*i=*j;
//		*j=t;
//	}
//}
//
//int s_cmp(char *s,char *t){
//	while((*s)&&(*t)&&(*t==*s)){
//		t++;
//		s++;
//	}
//	if(*s-*t>0){
//		return 1;
//	}else if(*s-*t==0){
//		return 0;
//	}else{
//		return -1;
//	}
//}
//
//void fun(double r, double &a,double &l){
//	a=3.1415*r*r;
//	l=3.1415*2*r;
//}
