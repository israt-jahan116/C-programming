#include<stdio.h>
int isPassed(int marks);
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(isPassed(marks)==1)
    {
        printf("Passed");

    }
    else
    {
        printf("Fail");
    }
    return 0;
}
int isPassed(int marks)
{
    if(marks>=40)
    {
        return 1;
    }
    else{
        return 0;
    }
}


