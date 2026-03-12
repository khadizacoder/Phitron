
#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

long long dis[1005];
vector<Edge> edgeList;
int n, e;
bool cycle = false;

void bellmanFord()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edgeList)
        {
            int a, b;
            long long int c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto ed : edgeList)
    {
        int a, b;
        long long int c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edgeList.push_back(Edge(a, b, w));
    }

    for (int i = 1; i <= n; i++)
        dis[i] = LLONG_MAX;

    int src, tc;
    cin >> src >> tc;

    dis[src] = 0;
    bellmanFord();

    while (tc--)
    {
        int des;
        cin >> des;
        if (cycle)
        {
            cout << "Negative Cycle Detected\n";
            break;
        }
        else
        {
            if (dis[des] == LLONG_MAX)
                cout << "Not Possible\n";
            else
                cout << dis[des] << endl;
        }
    }

    return 0;
}