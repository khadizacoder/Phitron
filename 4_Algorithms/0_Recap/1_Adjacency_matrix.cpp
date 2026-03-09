#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj_Mat(n, vector<int>(n));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j) adj_Mat[i][j] = 1;
            else adj_Mat[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_Mat[a][b] = 1;
        adj_Mat[b][a] = 1; // undirected
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
           cout << adj_Mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}