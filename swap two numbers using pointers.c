//write a c programe to swap two numbers using pointers and extra temporary variable.

#include<stdio.h>
int main()
{
    int a,b,extra;
    int *ptr1,*ptr2;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("Before swap a is a:%d\n",a);
    printf("Before swap b is b:%d\n",b);
    extra=*ptr1;
    *ptr1=*ptr2;
    *ptr2=extra;
    printf("Before swap a is a :%d\n",a);
    printf("Before swap b is b:%d\n",b);
    return 0;
}
