#include <bits/stdc++.h>
using namespace std;
vector<int> edjList[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(auto child : edjList[cur])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
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
        edjList[a].push_back(b);
        edjList[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int src, dis;
    cin >> src >> dis;
    bfs(src);

    if(vis[dis])
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}