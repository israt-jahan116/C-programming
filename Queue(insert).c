#include<stdio.h>
#define MAXSIZE 5
int main()
{
int queue[MAXSIZE]={10,20,30};
int front=0,rear=2,count=3;
int item,i;
printf("Enter item:");
scanf("%d",&item);
if(count==MAXSIZE)
{
    printf("OVERFLOW");

}
 else if
    (rear==MAXSIZE-1)
    {

    rear=0;
    }
  else
  {
        rear=rear+1;
    queue[rear]=item;
    count++;
    printf("Queue:");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
  }
  return 0;
}
