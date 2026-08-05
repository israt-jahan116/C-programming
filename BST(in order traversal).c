#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node*left;
 struct Node*right;
};
struct Node*newNode(int x)
{
  struct Node*node=(struct Node*)malloc(sizeof(struct Node));
   node->data=x;
   node->left=NULL;
   node->right=NULL;
   return node;

};
 void inorder(struct Node*node)
 {
     if(node==NULL)
        return;
     inorder(node->left);
     printf("%d ",node->data);
     inorder(node->right);
 }
int main()
{
    struct Node*root=newNode(2);
    root ->left=newNode(1);
    root->right=newNode(3);
    inorder(root);
    return 0;
}
