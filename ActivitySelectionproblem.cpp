#include<bits/stdc++.h>
using namespace std;
bool comparator(const pair<int,int>  a,const pair<int,int>  b){
    if(a.second < b.second){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout << "Enter total activity:- ";
    cin >> n;
    vector<pair<int, int>>v;
    for(int i = 0;i<n;i++){
        int si,fi;
        cout << "Enter start time and end time " << " ";
        cin >> si >> fi ;
        v.push_back({si,fi});
    }
    sort(v.begin(),v.end(),comparator);
    int count = 1;
    cout << v[0].first << " " << v[0].second << endl ;
    int p = 0;
    for(int i = 1;i<n;i++){
        if(v[i].first >= v[p].second){
            cout << v[i].first << " " << v[i].second << endl;
            p = i;
            count++; 
        }
    }
    cout << "No. maximum activity will be :- " << count ;
    return 0;
}
