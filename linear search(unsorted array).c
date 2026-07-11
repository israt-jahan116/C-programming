#include<stdio.h>
int main()
{
 int LA[20];
 int n;
 int target;
 int value,k;
 int i,j;
 int count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   {
     scanf("%d",&LA[i]);

   }

   scanf("%d",&target);
   for(i=0;i<n;i++)
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
           printf("%d",LA[i]);
       }

   }
   return 0;

}
