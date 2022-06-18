#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
    static int n1=0,n2=1,n3;
    if(n > 0)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
         cout << n3 << " ";
        fib(n-1);
    }
}
int main()
{
    int n;
    cout << "Enter how many terms you want to print\n";
    cin >> n;
    cout << 0 << " " << 1 << " ";
    fib(n-2);
}
