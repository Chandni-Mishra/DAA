#include <iostream>

using namespace std;
int find_max(int a[],int b[],int n,int m){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    for(int i=0;i<m;i++){
        if(max < b[i]){
            max = b[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter size of 1st array:- ";
    cin >> n;
    int a[n];
    cout << "Enter data in 1st array:- ";
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    
    cout << "Enter size of 2nd array:- ";
    int m;
    cin >> m;
    int b[m];
    cout << "Enter data in 2nd array:- ";
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }

    int big = find_max(a,b,n,m);
    int c[big+1] = {0};
    for(int i=0;i<n;i++){
        if(c[a[i]] != 1){
            c[a[i]] = 1;
        }
    }
    for(int i=0;i<m;i++){
        if(c[b[i]] == 1){
            c[b[i]]++;
        }
    }
    cout << "Intersection is:- ";
    for(int i=0;i<=big;i++){
        if(c[i] > 1){
            cout << i << " ";
        }
    }
    return 0;
}
