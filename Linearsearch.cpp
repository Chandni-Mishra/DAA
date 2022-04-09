#include<bits/stdc++.h>
using namespace std;
void linearsearch(int n,int arr[],int data)
{
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            flag = 0;
            cout << "element found at index :" << i << endl;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "element not found\n";
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
    int ele;
    cout << "Enter the element you want to search\n";
    cin >> ele;
    linearsearch(n,arr,ele);
}
