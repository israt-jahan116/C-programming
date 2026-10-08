
#include<stdio.h>
int isEligible(int age);
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(isEligible(age)==1)
    {
        printf("You can vote:");
    }
    else
    {
        printf("You cannot vote:");
    }
    return 0;
}
int isEligible(int age)
{
    if(age>=18)
    {
       return 1;
    }
    else
    {
        return 0;
    }

}
