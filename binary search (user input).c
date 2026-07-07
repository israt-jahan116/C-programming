//Write a C program to perform binary search using user input.
#include<stdio.h>
int main()
{
 int LA[100];
 int n,i;
 int target,count=0;
 scanf("%d%d",&n,&target);
 for(int i=0;i<n;i++)
  {
      scanf("%d",&LA[i]);
  }
 int low=0,high=n-1;
 while(low<=high)
 {
     int mid=(low+high)/2;
     if(LA[mid]==target)
     {
         printf("found:%d",LA[mid]);
         count++;
         break;
     }
    else if(LA[mid]<target)
    {
        low=mid+1;

    }
    else
    {
        high=mid-1;
    }
 }
    if(count==0)
    {
        printf("Not found");
    }

 return 0;
}
