#include<stdio.h>
void merge(int arr[],int left,int mid,int right)
{
  int i=left;
  int j=mid+1;
  int k=0;
  int temp[50];
  while(i<=mid&&j<=right)
  {
      if(arr[i]<arr[j])
      {
          temp[k]=arr[i];
          i++;
      }

  else
  {
      temp[k]=arr[j];
      j++;
  }
   k++;


}
while(i<=mid)
{
    temp[k]=arr[i];
    j++;
    k++;
}
for(i=left,k=0;i<right;i++,k++)
{
    arr[i]=temp[k];
}
}
void mergesort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
    }
}
int main()
{
    int arr[50];
    int n;
    printf("Student ID:341\n");
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

