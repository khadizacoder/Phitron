#include <bits/stdc++.h>
using namespace std;
vector<int> edgList[1005];
bool vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop(); 

        for(auto child : edgList[cur])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[cur] + 1;
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
        edgList[a].push_back(b);
        edgList[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src, dis;
    cin >> src >> dis;

    bfs(src);
    
    // for(int i = 0; i < n; i++)
    //     cout << i << " " << level[i] << endl;

    cout << level[dis] << endl;

    return 0;
}