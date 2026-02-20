#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        vector<int> v;


        for (int i = 0; i < adj_list[x].size(); i++)
        {
            v.push_back(adj_list[x][i]);
        }

        if(v.empty())
            cout << -1;

        sort(v.begin(), v.end(), greater<int>());

        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}