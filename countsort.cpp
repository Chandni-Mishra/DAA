#include<bits/stdc++.h>
using namespace std;
int get_max(int arr[],int n)
{
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
void count_sort(int arr[],int n)
{
    int big = get_max(arr,n);
    int c[n];
    int freq[big+1]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=1;i<=big;i++)
    {
        freq[i] = freq[i]+freq[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        int position;
        position = --freq[arr[i]];
        c[position] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = c[i];
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
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
    count_sort(arr,n);
    display(arr,n);
}
