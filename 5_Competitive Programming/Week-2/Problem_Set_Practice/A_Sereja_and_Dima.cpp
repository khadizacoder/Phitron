// Problem link: https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int sereja = 0, dima = 0;
    int i = 0, j = N - 1;
    while (i <= j)
    {
        if (A[i] > A[j])
        {
            sereja += A[i];
            i++;
        }
        else
        {
            sereja += A[j];
            j--;
        }

        if (i > j) break;
        
        if (A[i] > A[j])
        {
            dima += A[i];
            i++;
        }
        else
        {
            dima += A[j];
            j--;
        }
    }

    cout << sereja << " " << dima << "\n";
    return 0;
}