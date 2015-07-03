#include <iostream>
#include <cstring>
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
//
//void fun(double r, double *area,double *len);
//void fun(double r, double &a,double &l);
//
//
//double fun(double r,double (*fun)(double));
//double earea(double r);
//double elen(double r);
//
//bool check(char *str);
//int trans(char *str);
//
//
//int main() {
//	int a=4,*p;
//	p=&a;
//	cout<<a<<" "<<&a<<endl;
//	cout<<p<<" "<<&p<<endl;//p为指针变量，当然也有地址啦。它的值称为指针，是一个地址。
//	cout<<*p<<endl;//可以将*p直接看作变量a，即和cout<<a的结果是一样的。
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
//	int (*p)(int,int);//定义指向函数的指针变量p
//	p=max;//指针变量p指向函数max
//	c=(*p)(a,b);//使用指针变量p间接调用函数max
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
//	cout<<"逆序前:";
//	for(i=0;i<10;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	inv(a,10);
//	cout<<"逆序后：";
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
//	//编写函数实现库函数strcmp的功能
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
//	cout<<"请输入数组元素的个数：";
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
//	<指针变量>= new <数据类型> [<元素个数>];
//
////	int i,a[3]={0,7,3},*p;
////	p=a;
////	for(i=0;i<3;i++){
////		cout<<p[i]<<" ";
////	}
//
//	double r,area,len;
//	cout<<"请输入圆的半径： ";
//	cin>>r;
//	fun(r,area,len);
//	cout<<"area= "<<area<<endl;
//	cout<<"len= "<<len<<endl;
//
//	double r,area,len;
////	double (*p)(double);
////	double (*q)(double);
////	p=earea;
////	q=elen;
//	cout<<"请输入圆的半径： ";
//	cin>>r;
//	area=fun(r,earea);
//	len=fun(r,elen);
//	cout<<"area="<<area<<endl;
//	cout<<"len="<<len<<endl;
//
//	char ip[33];
//	cout<<"请输入一个32位二进制表示的IP地址： "<<endl;
//	cin>>ip;
//	if(strlen(ip)!=32){
//		cout<<"IP地址长度应为32位"<<endl;
//	}else if(!check(ip)){
//		cout<<"该字符串含有1和0之外的其他字符，不是正确的IP地址"<<endl;
//	}else{
//		cout<<"该IP地址对应的点分十进制写法是： "<<endl;
//		cout<<trans(ip)<<"."<<trans(ip+8)<<"."<<trans(ip+16)<<"."<<trans(ip+24)<<endl;
//	}
//
//	int i,j,*p[3],a[3][4]={
//			{1,2,3,4},
//			{5,6,7,8},
//			{9,10,11,12},
//	};
//	p[0]=a[0];
//	p[1]=a[1];
//	p[2]=a[2];
//	for(i=0;i<3;i++){
//		for(j=0;j<4;j++){
//			cout.width(5);
//			cout<<p[i][j];
//		}
//		cout<<endl;
//	}
//
//	char *name[]={"China","Japan","German","Franch","Itali"};
//	for(int i=0;i<5;i++){
//		cout<<name[i]<<endl;
//	}
//
//
//int elen(char *p);
//
//void del(char *p,char c);
//id u2d(char *p);

void sta(char *p);
int main(){
//	while(--argc>0){
//		cout<<argv[argc]<<endl;
//	}
//
//	char str[]="amwyanhoo";
//	//cout<<elen(str);
//	cout<<"amwyanhoo";
//
//	char *ptr[10],*q;
//	for(int i=0;i<10;i++){
//		ptr[i]=new char [100];
//		cin>>ptr[i];
//	}
//	q=ptr[0];
//	for(int i=1;i<10;i++){
//		if(strcmp(ptr[i],q)>0){
//			q=ptr[i];
//		}
//	}
//	cout<<q<<endl;
//
//
//	//指针第2题答案
//	char *str[3];
//	for(int i = 0; i < 3; i++) {
//		str[i]=new char[80];
//		cin >> str[i];
//	}
//	char *tmp;
//	for(int i=3;i>0;i--){
//		for(int j=0;j<i-1;j++){
//			if(strcmp(str[j],str[j+1])>0){
//				tmp=str[j];
//				str[j]=str[j+1];
//				str[j+1]=tmp;
//		}
//	}}
//
//	for(int m=0;m<3;m++){
//		cout<<str[m]<<" ";
//	}
//
//	char a[100];
//	cin>>a;
//	cout<<elen(a);
//
//	char str[3][80];
//	for(int i=0;i<3;i++){
//		cin>>str[i];
//	}
//	str[0][80]=str[1][80];
//	cout<<str[0];
//	for(int i=0;i<80;i++){
//		str[0][i]=str[1][i];
//	}
//	cout<<str[1];
//
//	cout<<str[0]<<endl<<str[1]<<endl;
//	for(int i=0;i<2;i++){
//		int k=i;
//		for(int j=i+1;j<3;j++){
//			if(strcmp(str[j],str[k])<0){
//				k=j;
//				if(k!=i){
//					char tmp[80];
//					for(int n=0;n<80;n++){
//							tmp[n]=str[i][n];
//						}
//					for (int n = 0; n < 80; n++) {
//						 str[i][n] = str[k][n];
//					}
//					for (int n = 0; n < 80; n++) {
//						str[k][n] = tmp[n];
//					}
//				}
//			}
//		}
//	}
//	for(int m=0;m<3;m++){
//		cout<<str[m]<<" ";
//	}
//
//	char str[]="abcdexxxcccaeb";char c='c';
//	del(str,c);
//	cout<<str;
//
//	//第5道题
//	char *mou[]={"January","February","March","April","May","June","July","August","August",
//			"October","November","December"	};
//	int i;
//	cout<<"请输入一个数字：";
//	cin>>i;
//	if(i>1&&i<12){
//	cout<<"this mouth is "<<mou[i-1];
//	}else{
//		cout<<"Input Error";
//	}
//
//	char str[]="QWEcdfy1123@#";
//	cout<<(int('a')-int('A'));
//	cout<<char(int('a')-32);
//	sta(str);
//
//	char *q[4]={"abc","123","xyz","ijk"};
//	char **p=q;
//	char *pMax=q[0];
//	cout<<&q[3]<<endl;
//	cout<<q[3]<<endl;
//	while(p<=&q[3]){
//		if(strcmp(pMax,*p)<0){
//			pMax=*p;
//		}
//		p++;
//	}
//	cout<<pMax;
//
//	//多个字条串排序方法一：
//	char *p[]={"amw","dbm","jjko","jjd"};
//	for(int i=0;i<=2;i++){
//		int k=i;//k是用来存储最小元素下标
//		for(int j=i+1;j<=3;j++){
//			if(strcmp(p[j],p[k])<0){
//				k=j;
//			}
//			if(k!=i){
//				char *q;
//				q=p[i];
//				p[i]=p[k];
//				p[k]=q;
//			}
//		}
//	}
//	//多个字条串排序方法2：
//	char *p[]={"dbm","amw","jjko","jjd"};
//	char *q;
//	for(int i=4;i>0;i--){
//		for(int j=0;j<i-1;j++){
//			if(strcmp(p[j],p[j+1])>0){
//				q=p[j];
//				p[j]=p[j+1];
//				p[j+1]=q;
//			}
//		}
//	}
//	for(int i=0;i<4;i++){
//		cout<<p[i]<<" ";
//	}



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
//
//
////计算圆面积
//double earea(double r){
//	double area;
//	area= 3.1416*r*r;
//	return area;
//}
//
//计算圆周长
//double elen(double r){
//	double len;
//	len=3.1416*2*r;
//	return len;
//}
//
//double fun(double r,double (*fun)(double)){
//	return (*fun)(r);
//}
//
//bool check(char *str){
//	int i;
//	for(i=0;i<32;i++){
//		if(str[i]!='1'&&str[i]!='0'){
//			return false;
//		}
//	}
//	return true;
//}
//
//int trans(char *str){
//	int n=0,i;
//	for(i=0;i<8;i++){
//		if(str[i]=='1'){
//			n=n*2+1;
//		}else{
//			n=n*2;
//		}
//	}
//	return n;
//}
//
//
//
//计算一个数组的长度，我写的两种方法
//int elen(char *p){
//	int i=0;
//	while(1){
//		if(*(p+i)=='\0'){
//			return i;
//		}else{
//			i++;
//		}
//	}}
//
//	int i;
//	for(i=0;*(p+i)!='\0';i++){
//		cout<<*(p+i)<<" ";
//	}
//	cout<<endl;
//	return i;
//}
//
////将一个字符串指定的字符删去
//void del(char *p,char c){
//	while(*p!='\0'){
//		if(*p==c){
//			char *q=p;//这里是两个指针同时指向一个地址，通过改变*q的值，*p也发生改变。
//			while(*q!='\0'){
//				*q=*(q+1);
//				q++;
//			}
//		}else {
//			p++;
//		}
//	}
//}
//	while(1){
//		int i=0;
//		if(*(p+i)!=0){
//			if(*(p+i)=='a'){
//				*(p+i)=*(p+i+1);
//				if()
//				i=i+2
//			}
//		}
//	}
//
//所有小写转大写，大小转小写
//void u2d(char *p){
//	while (*p != '\0') {
//		if ((int(*p) > 64) && (int(*p)) < 91) { //大小转小写
//			//*p = char(int(*p) + 32);
//			*p=*p+('a'-'A');//比下面的更好！
//			p++;
//		} else { //小写转大写
//			*p = char(int(*p) - 32);
//			p++;
//		}
//	}
//}
//
//统计各种字符串的个数
//void sta(char *p){
//	int i=0,j=0,k=0,m=0;
//	for(;*p!='\0';p++){
//		if((int(*p) > 64) && (int(*p)) < 91){
//			i++;
//		}else if (*p>='a'&&*p<='z') {
//			j++;
//		}else if (*p>='0'&&*p<='9') {
//			k++;
//		}else{
//			m++;
//		}
//	}
//	cout<<"大写字母的个数是："<<i<<endl;
//	cout<<"小写字母的个数是："<<j<<endl;
//	cout<<"数字的个数是："<<k<<endl;
//	cout<<"其他字母的个数是："<<m<<endl;
//}
