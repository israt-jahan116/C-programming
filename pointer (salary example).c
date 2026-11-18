//A customer buys 5 product each product costs 120 taka .calculate total costs,10% discount and final bill

#include<stdio.h>
int main()
{
 int price=120,quantity=5;
 int *ptr1,*ptr2;
 ptr1=&price;
 ptr2=&quantity;
 int total=(*ptr1)*(*ptr2);
 int discount=total*10/100;
 int final=total-discount;
 printf("total %d\n",total);
 printf("discount %d\n",discount);
 printf("final %d\n",final);
 return 0;



}
