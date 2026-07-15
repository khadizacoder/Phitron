#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> p(n);
        for (int &i : p)
            cin >> i;

        vector<vector<int>> adj(n);

        for (int i = 0; i < n; i++)
        {
            if (i + x < n)
            {
                adj[i].push_back(i + x);
                adj[i + x].push_back(i);
            }

            if (i + y < n)
            {
                adj[i].push_back(i + y);
                adj[i + y].push_back(i);
            }
        }

        vector<int> comp(n, -1);
        int id = 0;

        for (int i = 0; i < n; i++)
        {
            if (comp[i] != -1)
                continue;

            queue<int> q;
            q.push(i);
            comp[i] = id;

            while (!q.empty())
            {
                int u = q.front();
                q.pop();

                for (int v : adj[u])
                {
                    if (comp[v] == -1)
                    {
                        comp[v] = id;
                        q.push(v);
                    }
                }
            }

            id++;
        }

        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            int target = p[i] - 1;

            if (comp[i] != comp[target])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            yes;
        else
            no;
    }

    return 0;
}