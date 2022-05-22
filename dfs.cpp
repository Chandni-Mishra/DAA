#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>a[],int n,int m)
{
     a[n].push_back(m);
     a[m].push_back(n);
}
void dfs(vector<int>a[],int u,bool visited[])
{
    visited[u] = true;
    cout << u << " ";
    for(vector<int>::iterator it=a[u].begin();it<a[u].end();it++)
    {
        if(visited[*it] == false)
        {
            dfs(a,*it,visited);
        }
    }
}
int main()
{
    int v,e;
    cout << "Enter number of vertices\n";
    cin >> v;
    cout << "Enter number of edge\n";
    cin >> e;
    vector<int>a[v];
    int n,m;
    bool visited[v];
    for(int i=0;i<e;i++)
    {
        cout << "Enter 2 nodes to connect:- ";
        cin >> n;
        cin >> m;
        addEdge(a,n,m);
    }
    cout << "Graph is:";
    for(int i=0;i<v;i++)
    {
        for(vector<int>::iterator it=a[i].begin();it<a[i].end();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    cout << "Dfs traversal:";
    for(int i=0;i<v;i++)
    {
        if(visited[i] != true)
        {
            dfs(a,i,visited);
        }
    }
}
