#include<bits/stdc++.h>
using namespace std;
int jumpsearch(int arr[],int n,int key)
{
    int left =0;
    int right = sqrt(n);
    while(arr[right]<=key && right < n)
    {
        left = right;
        right += sqrt(n);
        if(right >n-1)
        {
            right = n;
        }
    }
    for(int i = left;i<right;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
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
    int key;
    cout << "Enter the key element to be searched\n";
    cin >> key;
    jumpsearch(arr,n,key);
    int index = jumpsearch(arr,n,key);
    if(index == -1)
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Element found at index:" << index << endl; 
    }
}
