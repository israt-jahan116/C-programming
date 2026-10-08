#include<stdio.h>
int square(int num);
int cube(int num);
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Square=%d\n",square(n));
printf("Cube=%d\n",cube(n));
return 0;

}
int square(int num)
{
    return num*num;

}int cube(int num)
{
    return num*num*num;
}
