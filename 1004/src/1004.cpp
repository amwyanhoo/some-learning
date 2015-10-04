#include <iostream>
#include<cstring>
using namespace std;
/*
给定一个字符串，问是否能通过添加一个字母将其变为回文串。

输入描述:
一行一个由小写字母构成的字符串，字符床长度小于等于10。
用例：
ede23ed	反例，已经移位过一次，遇到最后两个数不等
abceba	正例，最后两个数不等，但没有进行过移位
aba、abba 本身即为回文数
abac、abbac 在一边添加即可成为回文数
*/
#define YES true
#define NO false
bool CanbePalind(char *s){
	bool flag = false;
	int end = strlen(s) - 1;
	int begin = 0;
	while (begin < end){
		if ((s[begin] == s[end])){
			begin++;
			end--;
		}
		else if ((s[begin + 1] == s[end]) && (s[begin + 2] == s[end - 1]) && flag == false){//这两句
			//只允许运行一次
			flag = true;
			begin+=2;
			end--;
		}
		else if ((s[begin] == s[end - 1]) && (s[begin + 1] == s[end - 2]) && flag == false){
			flag = true;
			begin++;
			end-=2;
		}
		else
			break;
	}
	if (end - begin > 1)
		return NO;
	else if(end - begin == 1){
		if (s[begin] == s[end]||flag==false)//如果没有运行过上边那两行，说明是“abceba”或者本身为回文数（字长为双数）
			return YES;
		else//运行过一次，机会用完，无法再添加
			return NO;
	}else
		return YES;
}

int main(){
	char str[] = "xsukkusxf";
	if(CanbePalind(str)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

