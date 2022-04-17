#include<bits/stdc++.h>
using namespace std;
int comp;
void merge(int n,int arr[],int lb,int up,int mid,int *comp)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int brr[n];
    while(i<=mid && j<=up)
    {
        *comp = *comp+1;
        if(arr[i] <= arr[j]){
        brr[k] = arr[i];
        i++;
        k++;
        }
        else
        {
        brr[k] = arr[j];
        j++;
        k++;
        }
    }
      while(j<=up)
      {
          brr[k] = arr[j];
          j++;
          k++;
      }
        while(i<=mid)
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
    
    for(k = lb;k<=up;k++)
    {
        arr[k] = brr[k];
    }
}

void mergesort(int n,int arr[],int lb,int up,int *comp)
{
  if(lb<up)
  {
      int mid = (lb+up)/2;
      mergesort(n,arr,lb,mid,comp);
      mergesort(n,arr,mid+1,up,comp);
      merge(n,arr,lb,up,mid,comp);
  }
}
void display(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elemets of the array\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int lb = 0;
    int up = n-1;
    int comp=0;
    mergesort(n,arr,lb,up,&comp);
    cout << "Sorted array is:" << endl;
    display(n,arr);
    cout << endl;
    cout << "count:" << comp << endl;
}
