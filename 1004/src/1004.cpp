#include <iostream>
#include<cstring>
using namespace std;
/*
����һ���ַ��������Ƿ���ͨ�����һ����ĸ�����Ϊ���Ĵ���

��������:
һ��һ����Сд��ĸ���ɵ��ַ������ַ�������С�ڵ���10��
������
ede23ed	�������Ѿ���λ��һ�Σ������������������
abceba	������������������ȣ���û�н��й���λ
aba��abba ����Ϊ������
abac��abbac ��һ����Ӽ��ɳ�Ϊ������
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
		else if ((s[begin + 1] == s[end]) && (s[begin + 2] == s[end - 1]) && flag == false){//������
			//ֻ��������һ��
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
		if (s[begin] == s[end]||flag==false)//���û�����й��ϱ������У�˵���ǡ�abceba�����߱���Ϊ���������ֳ�Ϊ˫����
			return YES;
		else//���й�һ�Σ��������꣬�޷������
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

