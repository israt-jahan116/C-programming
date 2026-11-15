//Write a c programe using poiners find the average of three integer numbers entered by the users.
#include<stdio.h>
int main()
{
 int a,b,c;
 int *ptr1,*ptr2,*ptr3;
 float avg;
 printf("Enter two number:\n");
 scanf("%d",&a) ;
 scanf("%d",&b);
 scanf("%d",&c);
 ptr1=&a;
 ptr2=&b;
 ptr3=&c;
 avg=(*ptr1+*ptr2+*ptr3)/3.0;
 printf("avg is %.2f",avg);
 return 0;




}
