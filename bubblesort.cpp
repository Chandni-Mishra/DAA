#include<bits/stdc++.h>
using namespace std;
void bubblesort(int n,int arr[])
{
    int temp,comp=0,pass=0,flag ;
    for(int i=0;i<n-1;i++)
    {
        flag = 0;
        pass++;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                comp++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag =1 ;
            }
        }
        if(flag == 0)
         break;
    }
    cout << "total number of passes are " << pass << endl;
    cout << "total number of comparison are " << comp << endl;
}
void printele(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout << " " <<arr[i];
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
    bubblesort(n,arr);
    printele(n,arr);
}
