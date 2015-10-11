#include <list>
#include <iostream>
using namespace std;

/*n���ˣ����0~(n-1))����0��ʼ����������(m-1)���˳���ʣ�µ��˼�����0��ʼ������
��ʤ���ߵı�š� */
int JosephusProblem_Solution2(int n, int m){
	if (n < 1 || m < 1)
		return -1;

	list<int> listInt;
	unsigned i;
	//��ʼ������
	for (i = 0; i < n; i++)
		listInt.push_back(i);

	list<int>::iterator iterCurrent = listInt.begin();
	while (listInt.size() > 1){
		//ǰ��m - 1��
		for (i = 0; i < m - 1; i++){
			if (++iterCurrent == listInt.end())
				iterCurrent = listInt.begin();
		}
		//��ʱ����ɾ���Ľ��
		list<int>::iterator iterDel = iterCurrent;
		if (++iterCurrent == listInt.end())
			iterCurrent = listInt.begin();
		//ɾ�����
		listInt.erase(iterDel);
	}

	return *iterCurrent;
}


int main(){
	JosephusProblem_Solution2(7, 3);
	return 0;
}

