
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int item;
    struct Node*left_child;
    struct Node*right_child;
};
struct Node*creatNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->item=value;
    newNode->left_child=NULL;
    newNode->right_child=NULL;
    return newNode;

};
struct Node*insert(struct Node*root,int value)
{
    if(root==NULL)
    {
        return creatNode(value);

    }
    if(value<root->item)
    {
        root->left_child=insert(root->left_child,value);

    }
    else
    {
        root->right_child=insert(root->right_child,value);
    }
    return root;
}
void printInorder(struct Node*root)
{
    if(root!=NULL)
    {
        printInorder(root->left_child);
        printf("%d ",root->item);
        printInorder(root->right_child);
    }
}
void printPreorder(struct Node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->item);
        printPreorder(root->left_child);
        printPreorder(root->right_child);
    }
}
void printPostorder(struct Node*root)
{
    if(root!=NULL)
    {
        printPostorder(root->left_child);
        printPostorder(root->right_child);
        printf("%d ",root->item);

    }
}
int main()
{
  struct Node*root=NULL;
  int num,element;
  printf("student ID:341\n");
  printf("Enter number of nodes:");
  scanf("%d",&num);
  printf("Enter elements:");
  for(int i=0;i<num;i++)
  {
      scanf("%d",&element);
      root=insert(root,element);

  }
  printf("\nInorder Traversal:");
  printInorder(root);
  printf("\npreorder Traversal:");
  printPreorder(root);
  printf("\nPostorder Traversal:");
  printPostorder(root);
  printf("\n");
  return 0;

}


