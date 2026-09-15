
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
void printTree(struct Node *tree)
{
    if(tree==NULL)
        return;
  printTree(tree->left);
  printf("%d ",tree->data);
  printTree(tree->right);


}
int main()
{
    struct Node*root=NULL;
    int number,x,studentID;

    printf("Enter number of nodes:");
    scanf("%d",&number);
    printf("Enter elements:\n");
    int i=0;
    while(i<number)
    {
        scanf("%d",&x);
        root=insertvalue(root,x);
        i++;
    }
    printf("Enter student ID to insert:");
    scanf("%d",&studentID);
    root=insertvalue(root,studentID);
    printf("BST after insertion:");
    printTree(root);
    return 0;

}

