#include<bits/stdc++.h>
using namespace std;
void sortname(int n,string str[])
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(str[j]>str[j+1])
            {
                string temp;
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}
void display(int n,string str[])
{
    cout  << "sorted list is" << endl;
    for(int i=0;i<n;i++)
    {
        cout << str[i] << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter total names you want to enter\n";
    cin >> n;
    string str[n];
    cout << "Enter the name of the students\n";
    for(int i=0;i<n;i++)
    {
        cin >> str[i];
    }
    sortname(n,str);
    display(n,str);
}
