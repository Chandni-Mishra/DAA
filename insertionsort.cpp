#include<bits/stdc++.h>
using namespace std;
void insertionsort(int n,int arr[])
{
    int temp,i,j,comp=0,swap=0;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        for(j=i-1;j>=0;j--)
        {
            comp++;
            if(temp<arr[j])
            {
                arr[j+1] = arr[j];
                swap++;
            }
            else{
             break;
            }
        }
        if(i!=(j+1))
        {
            arr[j+1] = temp;
            swap++;
        }
    }
    cout << comp << endl;
    cout << swap << endl;

}
void display(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array\n" ;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
          cin >> arr[i];
    }
    insertionsort(n,arr);
    display(n,arr);
}
