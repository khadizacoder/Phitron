#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;

    int adjDri[N][N];
    memset(adjDri, 0, sizeof(adjDri));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i == j)
                adjDri[i][j] = 1;

    while (E--)
    {
        int A, B;
        cin >> A >> B;

        adjDri[A][B] = 1;
        adjDri[B][A] = 1; // Undirected
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << adjDri[i][j] << " ";
        
        cout << endl;
    }

    return 0;
}