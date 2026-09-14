#include<stdio.h>
#define MAX 50
int studentID[MAX];
int priority[MAX];
int size=0;
void enqueue(int id,int p)
{
    if(size==MAX)
    {
        printf("Queue is full\n");
        return;
    }
    studentID[size]=id;
    priority[size]=p;
    size++;
}
void dequeue()
{
    if(size==0)
    {
        printf("Queue is empty\n");
        return;
    }
    int pos=0;
    for(int i=1;i<size;i++)
    {
        if(priority[i]<priority[pos])
        {
            pos=i;
        }
    }
    printf("Delete student ID:%d\n",studentID[pos]);
    for(int i=pos;i<size-1;i++)
    {
        studentID[i]=studentID[i+1];
        priority[i]=priority[i+1];
    }
    size--;
}
void display()
{
    for(int i=0;i<size;i++)
    {
        printf("student ID:%d\n",studentID[i],priority[i]);
    }
}
int main()
{
    printf("MY student ID:200\n");
    enqueue(200,1);
    enqueue(201,3);
    enqueue(202,6);
    enqueue(203,4);
    enqueue(204,1);
    printf("priority queue:\n");
    display();
    printf("\nAfter Deletion:\n");
    dequeue();
    display();
    return 0;

}
