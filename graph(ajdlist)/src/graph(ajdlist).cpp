/*  图的邻接表结构定义
	邻接表图的创建
	邻接矩阵的深度遍历操作
	邻接矩阵的优先广度遍历操作
*/

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//邻接表结构
//typedef char VertexType;  //顶点类型应由用户定义
//typedef int EdgeType;  //边上的权值类型应由用户之义
//typedef struct EdgeNode {  //边表结点
//	int adjvex;  //邻接点域，存储该顶点对应的下标
//	EdgeType weight;  //用于存储权值，对于非网图可以不需要
//	struct EdgeNode *next;  //链域，指向下一个邻接点
//} EdgeNode;
//typedef struct VertexNode {  //顶点表结点
//	VertexType data;  //顶点域，存储顶点信息
//	EdgeNode *firstedge; //边表头指针
//} VertexNode, AdjList[MAXVEX];
//typedef struct {
//	AdjList adjList;
//	int numVertexes, numEdges;  //图中当前顶点数和边数
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

// 建立图的邻接表结构
/*步骤：
	1）先输入图的顶点数与边数，
	2）对顶点进行赋值：输入data，将firstedge指针置空
	3）对边的两端顶点标号赋值。
		已知边的数目numEdges，建立for循环，申请空间，头插法：

*/
void CreateALGraph(GraphAdjList *G) {
	int i, j, k;
	EdgeNode *e;
	printf("输入顶点数和边数:\n");
	scanf("%d,%d", &G->numVertexes, &G->numEdges); //输入顶点数和边数
	for (i = 0; i < G->numVertexes; i++) {
		cout << "请输入顶点值";
		cin>>G->adjList[i].data;
		G->adjList[i].firstedge = NULL;
	}
	for (k = 0; k < G->numEdges; k++) {
		printf("输入边(vi，vj)上的顶点序号:\n ");
		scanf("%d ,  %d", &i, &j); // 输入边(vi，vj)上的顶点序号
		e = (EdgeNode*)malloc(sizeof(EdgeNode));  //向内存申请空间，生成边表结点
		e->adjvex = j; //邻接序号为j
		e->next = G->adjList[i].firstedge; //将e指针指向当前顶点指向的结点
		G->adjList[i].firstedge = e; //将当前顶点的指针指向e
		//头插法
		e = (EdgeNode*)malloc(sizeof(EdgeNode));  //向内存申请空间
		e->adjvex = i;  //邻接序号为i
		e->next = G->adjList[j].firstedge;  //将e指针指向当前顶点指向的结点
		G->adjList[j].firstedge = e; //将当前顶点的指针指向e
	}
}

//邻接表的深度优先递归算法* /
typedef  int  Boolean;
Boolean  visited[20];
void DFS(GraphAdjList  GL, int i){
	EdgeNode *p;
	visited[i] = true;
	//printf("%c", GL.adjList[i].data);  //打印顶点， 也可以其他操作叮
	cout << GL.adjList[i].data;
	p = GL.adjList[i].firstedge;
	while (p){
		if (!visited[p->adjvex])
			DFS(GL, p->adjvex); //命为访问的邻接顶点返归调用*/
		p = p->next;
	}
}
//够接求的深度造历操作
void DFSTraverse(GraphAdjList  GL){
	int  i;
	for (i = 0; i < GL.numVertexes; i++)
		visited[i] = false; //初始所有顶，~，~状态都是未访问过状态叮
	for (i = 0; i < GL.numVertexes; i++)
		if (!visited[i])  //对永访问过的顶点调用DFS.筹是遥远圈，只会执行一次* /
			DFS(GL, i);
}

int main( )
{
	GraphAdjList G;
	CreateALGraph(&G);
	DFSTraverse(G);
	return 0;
}

