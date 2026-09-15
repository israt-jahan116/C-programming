#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node*left;
    struct Node*right;

};
struct Node *newNode(int x)
{
 struct Node *p=malloc(sizeof( struct Node));
p->data=x;
p->left=NULL;
p->right=NULL;
return p;
}
struct Node *insertvalue (struct Node*tree,int x)

{

 if(tree==NULL)
        return newNode(x);
 if(x<tree->data)
    tree->left=insertvalue(tree->left,x);
 else
    tree->right=insertvalue(tree->right,x);
 return tree;

}
struct Node*findminimum(struct Node *tree)
{
    struct Node *current=tree;
    while(current->left !=NULL)
        current=current->left;
        return current;
}

  struct Node*deletevalue(struct Node *tree,int studentID)
  {
   if(tree==NULL)
        return NULL;
   if(studentID<tree->data)
   {
       tree->left=deletevalue(tree->left,studentID);
   }
  else if(studentID >tree->data)
  {
      tree->right=deletevalue(tree->right,studentID);
  }
  else
  {
      if(tree->left==NULL)
      {
          struct Node *Temp=tree->right;
          free(tree);
          return Temp;
      }
      if(tree->right==NULL)
      {
          struct Node *temp=tree->left;
          free(tree);
          return temp;
      }
      struct Node *temp=findminimum(tree->right);
      tree ->data=temp->data;
      tree->right=deletevalue(tree->right,temp->data);
  }

  return tree;
  }
void printTree(struct Node *tree)
{
    if(tree==NULL)
        return ;
    printTree(tree->left);
    printf("%d ",tree->data);
    printTree(tree->right);

}
int main()
{
    struct Node *root=NULL;
    int number,value,studentID;
    printf("Enter number of nodes:");
    scanf("%d",&number);
    int i=0;
    while(i<number)
    {
        scanf("%d",&value);
    root=insertvalue(root,value);
    i++;
    }


printf("Enter Student ID to delete:");
scanf("%d",&studentID);
printf("Student ID:%d\n",studentID);
root=deletevalue(root,studentID);
printf("BST after deletion:");
printTree(root);
    return 0;


}

