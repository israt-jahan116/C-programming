#include<stdio.h>
#define MAXSIZE 5
int main()
{
  int queue[MAXSIZE]={10,20,30};
  int fornt =0,rear=2,count=3;
  int item,i;
  if(count==0)
   {
       printf("UNDERFLOW");

   }
    else
    {
        item=queue[fornt];
        if(fornt==MAXSIZE-1)
            fornt=0;
        else
            fornt=fornt +1;
        count--;
        printf("Delete Item=%d\n",item);
        printf("Queue:");

        for(i=fornt;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
  return 0;
}
