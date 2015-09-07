/*  图的邻接矩阵结构定义
	邻接矩阵的深度遍历操作
	邻接矩阵的优先广度遍历操作
*/
#include <stdio.h>
#include <stdlib.h>
#include "queue.cpp"


typedef char VertexType; 	//顶点类型应由用户定义
typedef int EdgeType; 	//边上的权位类型应由用户定义
#define  MAXVEX 100 		//最大顶点数，应由用户定义
#define  INFINITY 65535		//用65535来代表无穷
//邻接矩阵结构
typedef struct {
	VertexType vexs[MAXVEX];  //顶点表
	EdgeType arc[MAXVEX][MAXVEX]; //邻接矩阵，可看作边表
	int numVertexes, numEdges;  // 图中当前的顶点数和边数
} MGraph;

// 建立无向网图的邻接矩阵表示
void CreateMGraph(MGraph *G) {
	int i, j, k, w;
	printf("输入顶点数和边:\n");
	scanf("%d,%d", &G->numVertexes, &G->numEdges);  //输入顶点数和边数
	for (i = 0; i < G->numVertexes; i++) //读入顶点信息，建立顶点表
		scanf("%d",&G->vexs[i]);
	for (i = 0; i < G->numVertexes; i++)
		for (j = 0; j < G->numVertexes; j++)
			G->arc[i][j] = INFINITY;  //邻接矩阵初始化
	for (k = 0; k < G->numEdges; k++) { //读入numEdges条边，建立邻接矩阵
		printf("输入边(vi，vj)上的下标i. 下标j和权w: \n");
		scanf("%d ,  %d,  %d", &i, &j, &w); //输入边(vi，vj)上的权w
		G->arc[i][j] = w;
		G->arc[j][i] = G->arc[i][j];  //因为是无向画.矩阵对称
	}
}

typedef  int Boolean;  //,  Boblean是布尔类型，其位是TRUE或FALSE */
Boolean  visited[20];  //访问标志的数组
//邻接矩阵的深度优先递归算法
void DFS(MGraph  G, int  i) {
	int  j;
	visited[i] = true;
	printf("%c", G.vexs[i]); //打印顶点.也可以其他操作
	for (j = 0; j < G.numVertexes; j++)
		if (G.arc[i][j] == 1 && !visited[j])
			DFS(G, j);	//对为访问的邻接顶点递归调用
}

//邻接矩阵的深度遍历操作
void DFSTraverse(MGraph  G){
	int  i;
	for (i = 0; i < G.numVertexes; i++)
		visited[i] = false;  //初始化所有顶点状态都是未访问过状态合
	for (i = 0; i < G.numVertexes; i++)
		if (!visited[i])//对来访问过的顶点调用DFS.若是连通图，只会访问一次
			DFS(G, i);
}

//邻接矩阵的广度遍历算法
void BFSTraerse(MGraph G) {
	int i, j;
	Queue Q;
	for (i = 0; i < G.numVertexes; i++)
		visited(i) = false;
	InitQueue(&Q); /*初始化-捕~用的队列*/
	for (i = 0; i < G.numVertexes; i++) {  //对每一个顶点做循环V
		if (!visited[i]) { /*芳是未仿问过草地处理*/
			visited[i] = true;  //设置当'可顶点访问过*/
			printf("%c", G.vexs[i]);  //打印顶点.也可以其他，操作.，/
			EnQueue(&Q, i);  //将此1重点入队，，) * /
			while (!QueueEmpty(Q)) { //务聋'可队列不为空忖
				DeQueue(&Q, &i);  //*队中元余出队列，赋位给i * /
				for (j = 0; j < G.numVertexes; j++) {
					///1)断其他顶点是量与当前顶点存在边且永该问过*/
					if (G.arc[i][j] == 1 && !visited[j]) {
						visited[j] = true; //舍将裁剑的此顶点标记，为已访问* /
						printf("%c", G.vexs[j]);  //.tr~p顶点* /
						EnQueue(&Q, j);  //将找到的此顶点入队列* /
					}
				}
			}
		}
	}
}
void main(){
	/*ALGraph* G = (ALGraph*)malloc(sizeof(ALGraph));
	create(G);
	for (int i = 0; i< G->n; i++)
	{
		printf("%d->", i);
		while (G->adjlist[i].firstedge != NULL)
		{
			printf("%d->", G->adjlist[i].firstedge->adjvex);
			G->adjlist[i].firstedge = G->adjlist[i].firstedge->next;

		}
		printf("\n");
	}*/
	MGraph G;
	CreateMGraph(&G);
	DFSTraverse(G);

}

