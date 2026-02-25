#include <bits/stdc++.h>
using namespace std;

int n, m, di, dj;
char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    di = -1, dj = -1;

    while (!q.empty())
    {
        pair<int,int> cur = q.front();
        q.pop();

        int curi = cur.first;
        int curj = cur.second;

          if (grid[curi][curj] == 'D')
        {
            di = curi;
            dj = curj;
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            int ci = curi + d[i].first;
            int cj = curj + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {curi, curj};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }

    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    if (di != -1)
    {
        while (grid[di][dj] != 'R')
        {
            pair<int,int> p = parent[di][dj];
            if (grid[p.first][p.second] == '.')
                grid[p.first][p.second] = 'X';
            di = p.first;
            dj = p.second;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}