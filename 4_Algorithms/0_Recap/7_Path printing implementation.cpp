#include <bits/stdc++.h>
using namespace std;

vector<int> edjList[1005];
bool vis[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(auto child : edjList[cur])
        {
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
        edjList[a].push_back(b);
        edjList[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    vector<int> ans;
    int node = dst;
    while(node != -1)
    {
        ans.push_back(node);
        node = parent[node];
    }

    reverse(ans.begin(), ans.end());
    for(int x : ans)
        cout << x << " ";

    return 0;
}