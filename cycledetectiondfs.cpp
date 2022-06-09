#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>a[],int u,int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}
bool dfs(vector<int>a[],int u,bool visited[],int p)
{
    visited[u] = true;
    for(vector<int>::iterator it = a[u].begin();it != a[u].end();it++)
    {
        if(visited[*it]!=true)
        {
            if(dfs(a,*it,visited,u))
              return true;
        }
        else
        {
          if(*it != p)
          return true;
        }
    }
    return false;
}
int main()
{
    int v,e;
    cout << "Enter total number of vertcies\n";
    cin >> v;
    cout << "Enter total number of edges\n";
    cin >> e;
    vector<int>a[v];
    bool visited[v];
    for(int i=0;i<e;i++)
    {
        int n,m;
        cout << "Enter two nodes to be connected\n";
        cin >> n >> m;
        addEdge(a,n,m);
    }
    cout << "Graph is:";
    for(int i=0;i<v;i++)
    {
        for(vector<int>::iterator it = a[i].begin();it != a[i].end();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    bool b;
    for(int i=0;i<v;i++)
    {
        if(visited[i] != true)
        {
            b = dfs(a,i,visited,-1);
            if(b == true)
              break;
        }
    }
    if(b == true)
    {
        cout << "Cycle detected\n";
    }
    else
    {
        cout << "Cycle not detected\n";
    }
}
