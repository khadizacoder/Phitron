#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n + 1, vector<int>(n + 1));

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> adjList(n+1, vector<int>());

     for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(mat[i][j] == 1)
            {
                adjList[i].push_back(j);
            }
        }
    }

    cout << "-----------------------"<<endl;

    for(int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for(auto val : adjList[i])
            cout << val << " ";
        cout << endl;
    }

    return 0;
}