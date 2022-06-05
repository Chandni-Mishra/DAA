#include <iostream>

using namespace std;

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
    int small = 0;
    if(m > n){
        small = n;
    }
    else{
        small = m;
    }
    
    // Creating a third array to store intersection
    int c[small] = {0};
    int l = 0;   
    int flag ;
    for(int i=0;i<n;i++){
        flag = 0;
        // Checking for the element a[i] is present or not in third array by folliwing loop
        for(int j=0;j<small;j++){
            if(a[i] == c[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            // flag 1 means already present in third array and duplicated cannot reside in third array
            // so we will continue the loop 
            continue;
        }
        else{
            // Checkif (if flag = 0) the same element present in 2nd array array or not if present then it will
            // go in third array
            for(int k=0;k<m;k++){
                if(a[i] == b[k]){
                    c[l] = a[i];
                    l++;
                    break;
                }
            }
        }
    }
    // Printing the content of third array:
    cout << "Intersection of array is:- ";
    for(int i=0;i<l;i++){
        cout << c[i] << " ";
    }
    return 0;
}
