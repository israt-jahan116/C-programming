#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node*prev;
 struct Node*next;

};
int main()
{
    struct Node*head=NULL;
    struct Node*temp=NULL;
    struct Node*newNode;
    int n,value,id;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&value);
        newNode->data=value;
        newNode->prev=NULL;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=temp=newNode;
        }
        else
        {

             temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
        }
    }
    printf("Enter ID to insert:");
    scanf("%d",&id);
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=id;
    newNode->next=NULL;
    newNode->prev=temp;
    if(temp!=NULL)
    {
        temp->next=newNode;

    }
    temp=newNode;
    printf("List after insertion:");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("->NULL\n");
    return 0;
}
