#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float w;
    cout << "Enter total items:- ";
    cin >> n;
    vector<pair <float , pair<float , float > > > v;
    cout << "Enter size of bag:- ";
    cin >> w;
    for(int i = 0;i<n;i++){
        float p,w;
        cout << "Enter profit and weight:- ";
        cin >> p >> w;
        v.push_back({p/w,{p,w}});
    }
    cout << endl; 
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int i = 0;
    float tp = 0;
    for(;i<n;i++){
        if(w > 0 && v[i].second.second <= w){
            w = w - v[i].second.second;
            tp += v[i].second.first;
        }
        else{
            break;
        } 
    }
    tp = tp + (w/v[i].second.second)*v[i].second.first;
    cout << "Total profit :- " << tp << endl;
    return 0;
}
