#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int parent[1005];
bool cycle;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int child : adjList[cur])
        {
            if(vis[child] && parent[cur] != child)
                cycle = true;
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = cur;
            }
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

    cycle = false;
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    for(int i = 0; i < n; i++)
    {
        if(!vis[i])
            bfs(i);
    }

    if(cycle)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}