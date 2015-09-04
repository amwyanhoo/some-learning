typedef struct snode{
	char data[10];
	struct snode *next;
}String;

//�����Ӵ�T������S�е�pos���ַ�֮���λ�á��������ڣ���������ֵΪ0
//T�ǿգ�1��pos��StrLength(s)
int Index(String S, String T, int pos) {
	int i = pos; //i��������S�е�ǰλ���±�.��pos��Ϊ1�����posλ�ÿ�ʼƥ��
	int j = 1;  // j �����Ӵ�T�е�ǰλ���±�λ
	while (i <= S[0] && j <= T[0]) { //��iС��S����S��jС��T�ĳ���ʱѭ��
		if (S[i] == T[j]) { //����ĸ��������
			++i;
			++j;
		} else { //ָ��������¿�ʼƥ��
			i = i - j + 2; //i�˻ص��ϴ�ƥ����λ����һλ
			j = 1;	//j�˻ص��Ӵ�T����λ
		}
	}
	if (j > T[0])
		return i - T[0];
	else
		return 0;
}

//ͨ�����㷵e����ͤT��next4t
void get_next(String T, int *next) {
	int i, j;
	i = 1;
	j = 0;
	next[1] = 0;
	while (i < T[0]) {  //	�˴�T(0)��ʾ��T�ĳ���*/
		if (j == 0 || T[i] == T[j]) {	//T[i] ��ʾ�󼶵ĵ����ַ�. * /
			++i;
			++j;
			next[i] = j;
		} else {
			j = next[j];  //���I�ַ�����ͬ.��j λ��l��*1
		}
	}
}

//��������T����.s�е�pos���ַ�֮���λ�á� ��ϲ������. .~��������?ֵΪ0
//T�ǿ�. 1��p05SStrLength(S)
int Index_KMP(String S, String T, int pos) {
	int i = pos;  //��������.s��ǰ�����±��У� ��pos��Ϊ1��
	int j = 1;  //��������.T�е�ǰλ���³���*1
	int next[255];  //������-nazt��..* /
	get_next(T, next);  //��fT�������� �ý�neztfUIl  * /
	while (i <= S(0) & &j <= T[0]) { //С��S�ĳ�Jt��j С��T�ĳ��ȣ�ʱ����
		if (j == 0 || S[i]== T[j]) { //����ĸ�����������������㷨�ؼ���*/
			++i;
			++j;
		} else {  //ʳָ�Ӻ��������翪ʼƥ��*/
			j = next[j];  //j���غ��ʵ�λ��.i-{ֱ����*/
		}
	}
	if (j > T[0])
		return i - T[0];
	else
		return 0;
}
