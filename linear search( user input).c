//Write a C program for linear search  using user input.
#include<stdio.h>
int main()
{
 int LA[40];
 int n,i;
 int target,count=0;
 scanf("%d%d",&n,&target);
 for(i=0;i<n;i++)
  {
      scanf("%d",&LA[i]);
  }
  for(int i=0;i<n;i++)
  {
    if(LA[i]==target)
    {
        printf("Found:%d",LA[i]);
        count++;
        break;
    }
  }
 if(count==0)
  {
      printf("Not found");
  }
  return 0;
}
