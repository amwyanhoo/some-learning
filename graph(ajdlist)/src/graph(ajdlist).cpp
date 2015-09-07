/*  ͼ���ڽӱ�ṹ����
	�ڽӱ�ͼ�Ĵ���
	�ڽӾ������ȱ�������
	�ڽӾ�������ȹ�ȱ�������
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//�ڽӱ�ṹ
//typedef char VertexType;  //��������Ӧ���û�����
//typedef int EdgeType;  //���ϵ�Ȩֵ����Ӧ���û�֮��
//typedef struct EdgeNode {  //�߱���
//	int adjvex;  //�ڽӵ��򣬴洢�ö����Ӧ���±�
//	EdgeType weight;  //���ڴ洢Ȩֵ�����ڷ���ͼ���Բ���Ҫ
//	struct EdgeNode *next;  //����ָ����һ���ڽӵ�
//} EdgeNode;
//typedef struct VertexNode {  //�������
//	VertexType data;  //�����򣬴洢������Ϣ
//	EdgeNode *firstedge; //�߱�ͷָ��
//} VertexNode, AdjList[MAXVEX];
//typedef struct {
//	AdjList adjList;
//	int numVertexes, numEdges;  //ͼ�е�ǰ�������ͱ���
//} GraphAdjList;
//


typedef struct EdgeNode{
	int adjvex;
	struct EdgeNode *next;
}EdgeNode;

typedef struct VertexNode{
	int data;
	EdgeNode *firstedge;
}VertexNode;

typedef struct GraphAdjList{
	VertexNode adjList[100];
	int numVertexes, numEdges;
}GraphAdjList;

// ����ͼ���ڽӱ�ṹ
/*���裺
	1��������ͼ�Ķ������������
	2���Զ�����и�ֵ������data����firstedgeָ���ÿ�
	3���Աߵ����˶����Ÿ�ֵ��
		��֪�ߵ���ĿnumEdges������forѭ��������ռ䣬ͷ�巨��

*/
void CreateALGraph(GraphAdjList *G) {
	int i, j, k;
	EdgeNode *e;
	printf("���붥�����ͱ���:\n");
	scanf("%d,%d", &G->numVertexes, &G->numEdges); //���붥�����ͱ���
	for (i = 0; i < G->numVertexes; i++) {
		cout << "�����붥��ֵ";
		cin>>G->adjList[i].data;
		G->adjList[i].firstedge = NULL;
	}
	for (k = 0; k < G->numEdges; k++) {
		printf("�����(vi��vj)�ϵĶ������:\n ");
		scanf("%d ,  %d", &i, &j); // �����(vi��vj)�ϵĶ������
		e = (EdgeNode*)malloc(sizeof(EdgeNode));  //���ڴ�����ռ䣬���ɱ߱���
		e->adjvex = j; //�ڽ����Ϊj
		e->next = G->adjList[i].firstedge; //��eָ��ָ��ǰ����ָ��Ľ��
		G->adjList[i].firstedge = e; //����ǰ�����ָ��ָ��e
		//ͷ�巨
		e = (EdgeNode*)malloc(sizeof(EdgeNode));  //���ڴ�����ռ�
		e->adjvex = i;  //�ڽ����Ϊi
		e->next = G->adjList[j].firstedge;  //��eָ��ָ��ǰ����ָ��Ľ��
		G->adjList[j].firstedge = e; //����ǰ�����ָ��ָ��e
	}
}

//�ڽӱ��������ȵݹ��㷨* /
typedef  int  Boolean;
Boolean  visited[20];
void DFS(GraphAdjList  GL, int i){
	EdgeNode *p;
	visited[i] = true;
	//printf("%c", GL.adjList[i].data);  //��ӡ���㣬 Ҳ��������������
	cout << GL.adjList[i].data;
	p = GL.adjList[i].firstedge;
	while (p){
		if (!visited[p->adjvex])
			DFS(GL, p->adjvex); //��Ϊ���ʵ��ڽӶ��㷵�����*/
		p = p->next;
	}
}
//������������������
void DFSTraverse(GraphAdjList  GL){
	int  i;
	for (i = 0; i < GL.numVertexes; i++)
		visited[i] = false; //��ʼ���ж���~��~״̬����δ���ʹ�״̬��
	for (i = 0; i < GL.numVertexes; i++)
		if (!visited[i])  //�������ʹ��Ķ������DFS.����ңԶȦ��ֻ��ִ��һ��* /
			DFS(GL, i);
}

int main( )
{
	GraphAdjList G;
	CreateALGraph(&G);
	DFSTraverse(G);
	return 0;
}

