//����˫�ױ�ʾ�����ṹ����
#define  MAX_TREE_SIZE 100
typedef int TElemType; //�������������ͣ� Ŀǰ�ݶ�Ϊ����
typedef struct PTNode {  //���ṹ
	TElemType data;	//�������
	int parent;		//˫��λ��
}PTNode;

typedef struct {	//���ṹ
	PTNode nodes[MAX_TREE_SIZE];	//�������
	int r, n;	//����λ�úͽ����
} PTree;
