// Link : https://cses.fi/problemset/task/1667

#include <bits/stdc++.h>
using namespace std;
vector<int> edgList[100005];
bool vis[100005];
int level[100005];
int parent[100005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 1;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(auto child : edgList[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
       int a, b;
       cin>>a>>b;
       edgList[a].push_back(b);
       edgList[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(1);

    vector<int> ans;
    if(level[n] == -1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        cout << level[n] << endl;
    int node = n;
    while(node != -1)
    {
        ans.push_back(node);
        node = parent[node];
    }

    reverse(ans.begin(), ans.end());
    for(int x : ans)
        cout << x << " ";
    }
    
    return 0;
}