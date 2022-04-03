#include<bits/stdc++.h>
using namespace std;
void selectionsort(int n,int arr[])
{
    int comp=0,swap=0;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(arr[j]<arr[min])
            {
                min = j ;
            }
        }
        if(min != i)
        {
            int temp;
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            swap++;
        }
    }
    cout << "Comparisions:-" << comp << endl;
    cout << "swap:-" << swap << endl;
}
void printdata(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout << " " << arr[i];
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
    selectionsort(n,arr);
    cout << "sorted array is:-" << endl;
    printdata(n,arr);
}
