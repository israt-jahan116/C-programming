
#include<stdio.h>
#define MAX_VERTEX 10
int adj[MAX_VERTEX][MAX_VERTEX];
int visited[MAX_VERTEX];
int vertexcount;

void runDFS(int current)
{
 visited[current]=1;
 printf("%d ",current);
 for(int next=0;next<vertexcount;next++)
 {
     if(adj[current][next]==1 && visited[next]==0)
     {
         runDFS(next);
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
  for(int row=0;row<vertexcount;row++)

  {
      for(int column=0;column<vertexcount;column++)
      {

      scanf("%d",&adj[row][column]);
      }
  }



 printf("Enter starting vertex:");
 scanf("%d",&startvertex);
 for(int i=0;i<vertexcount;i++)
 {
     visited[i]=0;
 }
 printf("DFS Traversal:");
 runDFS(startvertex);
 return 0;


}
