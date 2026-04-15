#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        // sort(A.begin(), A.end(), greater<int>());
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < N; i++)
        {
            if (sum + A[i] >= 0)
            {
                cnt++;
                sum += A[i];
            }
            else continue;
        }
        cout << cnt << "\n";
    }
    return 0;
}