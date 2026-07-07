//write a c programe to implement linear search on a fixed array to find a specific target value.

#include<stdio.h>
int main()
{
 int LA[]={10,20,30,40,50};
 int target=40,count=0;
 for(int i=0;i<5;i++)
  {
      if(LA[i]==target)
      {
          printf("found:%d",LA[i]);
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
