//write a C program to linear search and delete in an array.
#include<stdio.h>
int main()
{
 int LA[20];
 int n;
 int target;
 int count=0;
 int i,j;
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
          printf("Found:%d\n",LA[i]);
          count++;
          break;
      }
  }
  if(count==0)
  {
      printf("Not found");
  }
  else
  {
      i=j;
      while(j<n)
      {
          LA[j]=LA[j+1];
          j++;
      }
      n--;
      printf("After delete:");
      for(i=0;i<n;i++)
      {
          printf("%d",LA[i]);

      }
      printf("\n");
  }
  return 0;

}
