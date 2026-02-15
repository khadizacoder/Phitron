#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int lavel[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    lavel[src] = 0;

    while(!q.empty())
    {
        int parent = q.front();
        q.pop();

        // cout << parent << " ";

        for(int child : adj_list[parent])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child] = true;
                lavel[child] = lavel[parent] + 1;
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
        /* code */
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int src, dis;
    cin >> src >> dis;
    
    memset(visited, false, sizeof(visited));
    bfs(src);

    // int mx = lavel[0];
    // All lavel print
    // for(int i = 0; i < n; i++)
    // {
        // cout << i << " -> " << lavel[i] << endl;
        // mx = max(mx, lavel[i]);
    // }

    cout << lavel[dis] << endl;
    // cout << mx;

    return 0;
}