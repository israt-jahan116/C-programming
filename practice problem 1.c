#include<stdio.h>
struct player{
char name[40];
int age;
int runs;
int wickets;

};
int main()
{
  struct player p1,p2;
  float average;
  printf("Enter player 1 information:\n");
  printf("Name:");
  scanf("%s",p1.name);
  printf("Age:");
  scanf("%d",&p1.age);
  printf("Runs:");
  scanf("%d",&p1.runs);
  printf("Wickets:");
  scanf("%d",&p1.wickets);

  printf("Enter player 2 information:\n");
  printf("Name:");
  scanf("%s",p2.name);
  printf("Age:");
  scanf("%d",&p2.age);
  printf("Runs:");
  scanf("%d",&p2.runs);
  printf("Wickets:");
  scanf("%d",&p2.wickets);

  printf("Display player  1 information:\n");
  printf("Name:%s\n",p1.name);
  printf("Age:%d\n",p1.age);
  printf("Runs:%d\n",p1.runs);
  printf("Wickets:%d\n",p1.wickets);


  printf("Display player  2 information:\n");
  printf("Name:%s\n",p2.name);
  printf("Age:%d\n",p2.age);
  printf("Runs:%d\n",p2.runs);
  printf("Wickets:%d\n",p2.wickets);


  average=(p1.runs+p2.runs)/2;
  printf("Total Runs=%d\n",p1.runs+p2.runs);
  printf("Average Runs=%f\n",average);
  if (p1.runs>p2.runs)
    printf("Highest Runs:%s\n",p1.name);
  else
    printf("Highest Runs:%s\n",p2.name);
  if(p1.wickets>p2.wickets)
    printf("Highest wickets:%s\n",p1.name);
  else
    printf("Highest wickets:%s\n",p2.name);
  return 0;






}
