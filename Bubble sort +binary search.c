//write a c program to sort an array using BUbble sort and search an element.
#include<stdio.h>
int main()
{
  int LA[]={40,10,30,20,50};
  int n=5;
  int i,j,temp;
  int target=30;
  int low=0,high=4,mid;
  int count=0;
  for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-1-i;j++)
       {
           if(LA[j]>LA[j+1])
           {
               temp=LA[j];
               LA[j]=LA[j+1];
               LA[j+1]=temp;
           }
       }
   }
   while(low<=high)
   {
       mid=(low+high)/2;
       if(LA[mid]==target)
       {
           printf("Found:%d",LA[mid]);
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
