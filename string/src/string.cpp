typedef struct snode{
	char data[10];
	struct snode *next;
}String;

//返回子串T在主串S中第pos个字符之后的位置。若不存在，则函数返回值为0
//T非空，1≤pos≤StrLength(s)
int Index(String S, String T, int pos) {
	int i = pos; //i用于主串S中当前位置下标.若pos不为1，则从pos位置开始匹配
	int j = 1;  // j 用于子串T中当前位置下标位
	while (i <= S[0] && j <= T[0]) { //若i小于S长度S且j小于T的长度时循环
		if (S[i] == T[j]) { //两字母相等则继续
			++i;
			++j;
		} else { //指针后退重新开始匹配
			i = i - j + 2; //i退回到上次匹配首位的下一位
			j = 1;	//j退回到子串T的首位
		}
	}
	if (j > T[0])
		return i - T[0];
	else
		return 0;
}

//通过计算返e回子亭T的next4t
void get_next(String T, int *next) {
	int i, j;
	i = 1;
	j = 0;
	next[1] = 0;
	while (i < T[0]) {  //	此处T(0)表示串T的长度*/
		if (j == 0 || T[i] == T[j]) {	//T[i] 表示后级的单个字符. * /
			++i;
			++j;
			next[i] = j;
		} else {
			j = next[j];  //会筹I字符不相同.则j 位回l溯*1
		}
	}
}

//返回子事T在主.s中第pos个字符之后的位置。 虽喜不存在. .~函数返回?值为0
//T非空. 1豆p05SStrLength(S)
int Index_KMP(String S, String T, int pos) {
	int i = pos;  //叫用于主.s当前往里下标佬， 菇pos不为1，
	int j = 1;  //叮用于子.T中当前位置下称他*1
	int next[255];  //户定义-nazt集..* /
	get_next(T, next);  //对fT作今析， 得剑neztfUIl  * /
	while (i <= S(0) & &j <= T[0]) { //小于S的长Jt且j 小于T的长度，时，忖
		if (j == 0 || S[i]== T[j]) { //哺字母相等则继续，与扑索算法地加了*/
			++i;
			++j;
		} else {  //食指钟后退重西哥开始匹配*/
			j = next[j];  //j返回合适的位置.i-{直不变*/
		}
	}
	if (j > T[0])
		return i - T[0];
	else
		return 0;
}
