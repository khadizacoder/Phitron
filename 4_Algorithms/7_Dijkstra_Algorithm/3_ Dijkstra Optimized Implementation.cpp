#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adjList[105];
int dis[105];

void dijkstra(int src)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        int par_node = par.second;
        int par_dis = par.first;

        for(auto c : adjList[par_node])
        {
            int c_node = c.first;
            int c_dis = c.second;
            if(par_dis + c_dis < dis[c_node])
            {
                dis[c_node] = par_dis + c_dis;
                pq.push({dis[c_node], c_node});
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
        int a, b, c;
        cin >> a >> b >> c;
        adjList[a].push_back({b, c});
        adjList[b].push_back({a,c});
    }
    
    for(int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dijkstra(0);

    for(int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;

    return 0;
}