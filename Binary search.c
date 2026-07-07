//Question:Write a C program to implement Binary search on sorted array to locate a specific target value.
#include<stdio.h>
int main()
{
 int LA[]={10,20,30,40,50};
  int n=5;
  int target=60,count=0;
  int low=0,high=4;
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
