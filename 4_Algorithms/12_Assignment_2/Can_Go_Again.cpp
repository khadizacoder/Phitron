#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    long long int adjList[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adjList[i][j] = 0;
            else
                adjList[i][j] = LLONG_MAX;
        }
    }

    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adjList[a][b] = c;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adjList[i][k] != LLONG_MAX && adjList[k][j] != LLONG_MAX)
                {
                    long long int listSum = adjList[i][k] + adjList[k][j];
                    if (listSum < adjList[i][j])
                        adjList[i][j] = listSum;
                }
            }
        }
    }

    bool cycle = false;
    for (int i = 1; i <= n; i++)
        if (adjList[i][i] < 0)
            cycle = true;

    if (cycle)
    {
        cout << "Negative Cycle Detected\n";
        return 0;
    }

    int s, t;
    cin >> s >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (adjList[s][d] == LLONG_MAX)
            cout << "Not Possible\n";
        else
            cout << adjList[s][d] << endl;
    }

    return 0;
}