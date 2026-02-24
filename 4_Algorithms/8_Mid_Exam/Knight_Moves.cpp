#include <bits/stdc++.h>
using namespace std;

int grid[105][105];
int vis[105][105];
int lavel[105][105];
vector<pair<int,int>> d = {{-1, 2}, {1, 2}, {1, -2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
int n, m;

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int bfs(int si, int sj, int qi, int qj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lavel[si][sj] = 0;

    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        int cur_i = cur.first;
        int cur_j = cur.second;

        if(cur_i == qi && cur_j == qj)
            return lavel[cur_i][cur_j];

        for(int i = 0; i < 8; i++)
        {
            int ci = cur_i + d[i].first;
            int cj = cur_j + d[i].second;

            if(valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                lavel[ci][cj] = lavel[cur_i][cur_j] + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;

        memset(vis, false, sizeof(vis));
        memset(lavel, -1, sizeof(lavel));

        cout << bfs(ki, kj, qi, qj) << endl;
    }
    
    return 0;
}