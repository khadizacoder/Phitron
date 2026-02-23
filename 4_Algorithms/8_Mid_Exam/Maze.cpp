#include <bits/stdc++.h>
using namespace std;

char grid[10005][10005];
bool vis[10005][10005];
int n, m;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 'R')
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!vis[i][j] && grid[i][j] == 'D')
            {
                dfs(i, j);
            }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(vis[i][j] && grid[i][j] == '.')
            {
                grid[i][j] = 'X';
            }
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}