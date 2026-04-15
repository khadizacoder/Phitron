#include <bits/stdc++.h>
using namespace std;
int dp[105];

int fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibo(n-1) + fibo(n-2) + fibo(n-3) + fibo(n-4);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    cout << fibo(n) << endl;
    return 0;
}