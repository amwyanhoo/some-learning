//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//char word[] = {'a','this','is','dog'};
//int len = sizeof(word);
//long point[len];
////point = new long(len);
//char* parse_str(char *str,char *word){
//    int i,j;
//    int str_len;
//    long tp;
//    if(NULL != str){
//	str_len = strlen(str)+1;
//    }
//    char temp[str_len*4] = {0};
//    for(i=0;i<len;i++){
//       char *p = strchr(str,word[i]);
//       point[i] = p
//       if(NULL != p){
//	    temp[i] = ' ';
//	    temp[i+1] = *p;
//
//       }
//    }
//	for (j = 0; j < i; j++) {
//		if (point[j] > point[j + 1]) {
//			tp = point[j];
//			point[j] = point[j + 1];
//			point[j + 1] = tp;
//		}
//	}
//    return temp;
//}
//int main(){
//    int flag;
//    char *temp;
//    char *str = "thisisadog";
//    flag = parse_str(str,word);
//    if(NULL != temp){
//	printf("str = %s\n",temp);
//    }
//    return 0;
//}


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define STR_NULL " "
char *words[] = {"is","a","dog","this","r"};
typedef struct str_info
{
	long addrs;
	char word[20];
	struct str_info *next;
}NodeInfo;
NodeInfo *parsestr(char *str,NodeInfo *info)
{
	int i;
	int len=5;
	char *p = NULL;
	NodeInfo *head = NULL;
	info = malloc(sizeof(NodeInfo)+1);
	head = info;
	if(NULL != info)
	{
		memset(info,0,sizeof(NodeInfo)+1);
	}
	for(i=0;i<len;i++)
	{
		if(NULL != words[i])
		p = strstr(str,words[i]);
		if(NULL != p)
		{
			printf("%d\n",p);
			info->addrs = p;
			if(NULL != words[i])
			strcpy(info->word,words[i]);
			info->next = malloc(sizeof(NodeInfo)+1);
        		if(NULL != info->next)
        		{
                		memset(info->next,0,sizeof(NodeInfo)+1);
        		}
			info = info->next;
		}
	}
	info = NULL;
	return head;
}
void print_str(NodeInfo *node)
{
	char temp[1024] = {0};
	while(node != NULL)
	{
		printf("%s\n",node->word);
		strcat(temp,node->word);
		strcat(temp," ");
		node = node->next;
	}
	printf("temp = %s\n",temp);
}
int main()
{
	char *str = "thisisadog";
	NodeInfo info;
	NodeInfo *head = NULL;
	NodeInfo *p1= NULL;
	NodeInfo *p2= NULL;
	NodeInfo *tp= NULL;
	head = parsestr(str,&info);
	print_str(head);
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		for(p2=head;p2!=NULL;p2=p2->next)
		{
			if(p1->addrs<p2->addrs)
			{
				tp = p1;
				tp = tp->next;
				break;
			}else{
				tp = p2;
				tp = tp->next;
				break;
			}
		}
	}
	print_str(head);
}

