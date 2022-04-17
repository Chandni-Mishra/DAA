#include<bits/stdc++.h>
using namespace std;
int partition(int n,int arr[],int lb,int up,int *comp)
{
    int pivot;
    pivot = arr[up];
    int i = lb-1;
    for(int j=lb;j<=up-1;j++)
    {
        if(arr[j]<=pivot)
        {
            *comp = *comp+1;
            i = i+1;
            int temp;
            temp = arr[j];
            arr[j]=arr[i];
            arr[i] = temp;
        }
    }
        int t;
        t = arr[i+1];
        arr[i+1] = arr[up];
        arr[up] = t;
    return i+1;
}
void quicksort(int n,int arr[],int lb,int up,int *comp)
{
    if(lb < up)
    {
        int index = partition(n,arr,lb,up,comp);
        quicksort(n,arr,lb,index-1,comp);
        quicksort(n,arr,index+1,up,comp);
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
    cout << "Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int lb=0;
    int up=n-1;
    int comp=0;
    quicksort(n,arr,lb,up,&comp);
    cout << "Sorted array is:\n";
    display(n,arr);
    cout << comp;
}
