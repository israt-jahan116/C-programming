#include<stdio.h>
int main()
{
 int LA[20];
 int n,target;
 int k,value;
 int low,high,mid;
 int i,j,count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
      scanf("%d",&LA[i]);

  }
 scanf("%d",&target);
  low=0;
  high=n-1;
  while(low<=high)
  {
     mid=(low+high)/2;
     if(LA[mid]==target)
     {
         printf("Found:%d ",LA[mid]);

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
       scanf("%d%d",&k,&value);
       j=n-1;
       while(j>=k)
       {
         LA[j+1]=LA[j];
         j--;
       }
       LA[k]=value;
       n++;
       printf("After insert:");
       for(i=0;i<n;i++)
       {
           printf("%d ",LA[i]);

       }

   return 0;
}
