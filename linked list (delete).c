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
 printf("Enter the number of nodes:");
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
          head=newNode;
          temp=newNode;

      }
      else
      {
          temp->next=newNode;
          newNode->prev=temp;
          temp=newNode;
      }
  }
  printf("Enter ID to delete:");
  scanf("%d",&id);
  temp=head;
  while(temp!=NULL)
  {
    if (temp->data==id)
    {
        if(temp->prev!=NULL)
        {
            temp->prev->next=temp->next;

        }
        else
        {
            head=temp->next;
        }
        if(temp->next!=NULL)
        {
            temp->next->prev=temp->prev;

        }
        free(temp);
        break;
    }
    temp=temp->next;
  }
  printf("After deletion:");
  temp=head;
  while(temp!=NULL)
  {
      printf("%d",temp->data);
      if(temp->next!=NULL)
      {
          printf("<->");
      }
      temp=temp->next;

  }
  printf("->NULL");
  return 0;


}
