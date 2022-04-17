#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int lb,int up)
{
    int pivot = arr[lb];
    int start = lb;
    int end = up;
    while(start <= end)
    {
    while(arr[start]<=pivot)
    {
        start++;
    }
    while(arr[end]>pivot)
    {
        end--;
    }
    if(start<end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    int k ;
    k = arr[lb];
    arr[lb] = arr[end];
    arr[end] = k;
    }
    return end;
}
void quicksort(int arr[],int lb,int up)
{
    int loc;
    if(lb < up)
    {
        loc = partition(arr,lb,up);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,up);
    }
}
void display(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " << endl;
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
    partition(arr,lb,up);
    quicksort(arr,lb,up);
    display(n,arr);
}
