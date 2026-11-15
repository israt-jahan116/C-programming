#include<stdio.h>
int main()
{
 int a,b;
 int *ptr1,*ptr2;
 printf("Enter two numbers:\n");
 scanf("%d",&a);
 scanf("%d",&b);
 ptr1=&a;
 ptr2=&b;
 printf("Sum is %d\n",*ptr1+*ptr2);
 printf("Sub is %d\n",*ptr1-*ptr2);
 printf("Mul is %d\n",(*ptr1)*(*ptr2));
 printf("Div is %d\n",(*ptr1)/(*ptr2));
 printf("Mod is %d\n",(*ptr1)%(*ptr2));
 return 0;





}
