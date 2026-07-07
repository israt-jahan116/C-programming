//Write a C program to delete an element into an array at a specific index.
#include<stdio.h>
int main()
{
 int arr[10]={10,20,40,50,60};
 int n=5;
 int k=2;
 int j=k;
 while(j<n)
  {
      arr[j]=arr[j+1];
      j++;
  }
  n=n-1;
  for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
  return 0;
}
