#include <bits/stdc++.h>
using namespace std;
vector<int> edgList[1005];
bool vis[1005];
int cnt = 0;

void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;
    cnt+=src;
    for(auto child : edgList[src])
        if(!vis[child])
            dfs(child);
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
    dfs(1);
    
    cout << endl;
    cout << "Total Count -> " << cnt << endl;

    return 0;
}