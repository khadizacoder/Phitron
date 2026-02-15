#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int lavel[1005];
int par[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    lavel[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        // cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                lavel[child] = lavel[parent] + 1;
                par[child] = parent;
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

    int src, dst;
    cin >> src >> dst;

    memset(visited, false, sizeof(visited));
    memset(lavel, -1, sizeof(lavel));
    memset(par, -1, sizeof(par));

    bfs(src);

    // All node parent
    // for(int i = 0; i < n; i++)
    //     cout << i << " -> " << par[i] << endl;

    int node = dst;
    vector<int> v;
    while (node != -1)
    {
        v.push_back(node);
        node = par[node];
    }

    reverse(v.begin(), v.end());

    for(int x : v)
        cout << x << " ";

    return 0;
}