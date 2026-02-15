#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int lavel[100005];
int parent[100005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lavel[src] = 0;
    parent[src] = -1;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout << par << " ";

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                lavel[child] = lavel[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    bfs(1);

    int dst = n;
    if (!vis[dst])
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    cout << lavel[dst] + 1 << endl;

    int node = dst;
    vector<int> v;
    while (node != -1)
    {
        v.push_back(node);
        node = parent[node];
    }
    reverse(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    return 0;
}