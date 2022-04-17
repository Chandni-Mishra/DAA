#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    char arr[n];
    cout << "Enter the alphabets please:\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int count=0,max=0,index = 0;
    for(int i=0;i<n;i++)
    {
        count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count > max)
        {
            max = count;
            index = i;
        }
    }
    cout << "element with highest frequency is:" << arr[index];
}
