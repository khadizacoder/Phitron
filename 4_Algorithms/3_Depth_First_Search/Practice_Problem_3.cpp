#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int cnt = 0;

void dfs(int src)
{
    vis[src] = true;
    cnt++;
    for(int c : adjList[src])
    {
        if(!vis[c])
        {
            dfs(c);
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

    memset(vis, false, sizeof(vis));
    vector<int>node;
    for(int i = 0; i < n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            node.push_back(cnt);
            cnt = 0; 
        }
    }
    sort(node.begin(), node.end());
    // sort(node.begin(), node.end(), greater<int>());

    for(int x : node)
        cout << x << " ";

    return 0;
}