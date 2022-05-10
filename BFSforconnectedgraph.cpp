#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>a[],int u,int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}
void bfs(vector<int>a[],int source,int n)
{
    queue<int>q;
    int visited[n] = {0};
    q.push(source);
    visited[source] = 1;
    while(q.empty() != 1)
    {
        int x = q.front();
        for(vector<int>::iterator it = a[x].begin();it<a[x].end();it++)
        {
            if(visited[*it]==0)
            {
                q.push(*it);
                visited[*it] = 1;
            }
        }
        cout << x << " ";
        q.pop();
    }
}
int main()
{
    int n;
    cout << "Enter total number of nodes\n";
    cin >> n;
    vector<int>a[n];
    int s;
    cout << "Enter source vertex\n";
    cin >> s;
    addEdge(a,0,1);
    addEdge(a,1,2);
    addEdge(a,2,3);
    bfs(a,s,n);
}
