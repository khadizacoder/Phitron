#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> V(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> V[i];
    }

    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        int sum = 0;
        for (int i = L; i <= R; i++)
        {
            sum += V[i];
        }
        cout << sum << endl;
    }

    return 0;
}