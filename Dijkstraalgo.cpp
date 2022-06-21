#include<bits/stdc++.h>
using namespace std;
void add_edge(int p,int q,int w,vector<pair<int,int> >arr[]){
    arr[p].push_back({q,w});
    arr[q].push_back({p,w});
}
int min(int cost[],int v,bool mst[]){
    int k = INT_MAX;
    int index;
    for(int i = 0;i<v;i++){
        if(mst[i] != true){
            if(cost[i] < k){
                k = cost[i];
                index = i;
            }
        }
    }
    return index;
}
void Dijktra(vector<pair<int,int> > arr[],int v,int source){
    int cost[v];
    for(int i = 0;i<v;i++){
        cost[i] = INT_MAX;
    }
    int parent[v];
    bool visited[v];
    for(int i = 0;i<v;i++){
        visited[i] = false;
    }
    memset(visited,false,sizeof(cost));
    cost[source] = 0;
    vector<int>path;
    cout << endl ;
    cout << "Shortest Path is:- ";
    for(int i = 0;i<v;i++){
        int k = min(cost,v,visited);
        path.push_back(k);
        visited[k] = true;
        for(auto it = arr[k].begin();it != arr[k].end();it++){
            if((*it).second + cost[k] <= cost[(*it).first]){
                cost[(*it).first] = (*it).second+cost[k] ;
            }
        }
    }
    for(int i = 0;i<path.size();i++){
        if(i != path.size()-1){
            cout << path[i] << " --> ";
        }
        else{
            cout << path[i] ;
        }
    }
    cout << endl << endl << "Shortest distance from source is:- "<<endl; ;
    for(int i = 0;i<v;i++){
        cout << source << " - " << i << " --> " << cost[i] << endl;
    }
}
int main(){
    int v,e,cost = 0;
    cout << "Enter total vrtices:- ";
    cin >> v;
    cout << "Enter total edges:- ";
    cin >> e;
    vector<pair<int,int> >arr[v];
    for(int i = 0;i<e;i++){
        int p,q,w;
        cout << "Enter 2 vertices to connect:- ";
        cin >> p >> q;
        cout << "Enter weight:- ";
        cin >> w;
        add_edge(p,q,w,arr);
    }
    int source;
    cout << "Enter source:- ";
    cin >> source;
    Dijktra(arr,v,source);
}
