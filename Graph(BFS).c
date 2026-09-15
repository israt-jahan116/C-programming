#include<stdio.h>
#define MAX_VERTEX 10
int adj[MAX_VERTEX][MAX_VERTEX];
int visited[MAX_VERTEX];
int vertexcount;

void runBFS(int source)
{
  int queue[MAX_VERTEX];
  int head=0;
  int tail=0;
  queue[tail++]=source;
  visited[source]=1;
  while(head<tail)
  {
      int current=queue[head++];
      printf("%d ",current);

  for(int node=0;node<vertexcount;node++)
  {
      if(adj[current][node]==1&&visited[node]==0)
      {
          visited[node]=1;
          queue[tail++]=node;
      }
  }
  }
}
int main()
{
  int studentID;
  int startvertex;
  printf("Enter Student ID:");
  scanf("%d",&studentID);
  printf("studentID:%d\n",studentID);
  printf("Enter number of vertices:");
  scanf("%d",&vertexcount);
  printf("Enter adjacency matrix:\n");
  for(int i=0;i<vertexcount;i++)

  {
      for(int j=0;j<vertexcount;j++)
      {

      scanf("%d",&adj[i][j]);
      }
  }



 printf("Enter starting vertex:");
 scanf("%d",&startvertex);
 for(int i=0;i<vertexcount;i++)
 {
     visited[i]=0;
 }
 printf("BFS Traversal:");
 runBFS(startvertex);
 return 0;
}



