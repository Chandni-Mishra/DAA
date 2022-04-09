#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int data,int l,int h)
{
    if(l>h)
    {
        return -1;
    }
    int mid = (l+h)/2;
    if(arr[mid]==data)
    {
        return mid;
    }
    if(arr[mid]>data)
    {
        return(binarysearch(arr,data,l,mid-1));
    }
    return(binarysearch(arr,data,mid+1,h));
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
    int ele;
    cout << "Enter the element you want to search\n";
    cin >> ele;
    int l=0,h=n-1;
    int index = binarysearch(arr,ele,l,h);
    if(index==-1)
    {
        cout << "element not found:" ;
    }
    else
    {
        cout << "ELement is found at index:" << index << endl;
    }
    return 0;
}
