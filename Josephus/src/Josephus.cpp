#include <list>
#include <iostream>
using namespace std;

/*n个人（编号0~(n-1))，从0开始报数，报到(m-1)的退出，剩下的人继续从0开始报数。
求胜利者的编号。 */
int JosephusProblem_Solution2(int n, int m){
	if (n < 1 || m < 1)
		return -1;

	list<int> listInt;
	unsigned i;
	//初始化链表
	for (i = 0; i < n; i++)
		listInt.push_back(i);

	list<int>::iterator iterCurrent = listInt.begin();
	while (listInt.size() > 1){
		//前进m - 1步
		for (i = 0; i < m - 1; i++){
			if (++iterCurrent == listInt.end())
				iterCurrent = listInt.begin();
		}
		//临时保存删除的结点
		list<int>::iterator iterDel = iterCurrent;
		if (++iterCurrent == listInt.end())
			iterCurrent = listInt.begin();
		//删除结点
		listInt.erase(iterDel);
	}

	return *iterCurrent;
}


int main(){
	JosephusProblem_Solution2(7, 3);
	return 0;
}

