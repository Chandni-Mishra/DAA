#include<stdio.h>
int binarysearch(int arr[],int n,int num)
{
  int mid,low,high;
  low=0;
  high = n-1;
  while(low<=high)
  {
  mid=(low+high)/2;
  if(arr[mid]==num)
  {
      return mid;
  }
  if(arr[mid]<num)
  {
      low = low+1;
  }
  else
  {
      high = high-1;
  }
  }
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of tha array in sorted manner\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter the element to be searched\n");
    scanf("%d",&num);
    int search = binarysearch(arr,n,num);
    printf("%d is found at %d index",num,search);
}
