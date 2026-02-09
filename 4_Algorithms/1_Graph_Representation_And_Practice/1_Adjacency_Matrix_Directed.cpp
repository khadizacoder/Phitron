#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;

    int adjMatrix[N][N];

    // for(int i = 0; i < N; i++)
    // {
    //     for(int j = 0; j < N; j++)
    //     {
    //         adjMatrix[i][j] = 0;
    //     }
    // }

    // shob gular value 0 kore delam
    memset(adjMatrix, 0, sizeof(adjMatrix));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            if (i == j)
                adjMatrix[i][j] = 1;
    }

    while (E--)
    {
        int A, B;
        cin >> A >> B;
        adjMatrix[A][B] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}