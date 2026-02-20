#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];

void dfs(int src)
{
    vis[src] = true;
    for(int child : adjList[src])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}