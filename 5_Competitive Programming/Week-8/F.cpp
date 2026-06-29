#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

const int MOD = 1e9+7;
int power(int x, int n)
{
    int ans = 1 % MOD;
    while(n)
    {
        if(n & 1)
            ans = (1LL * ans % MOD * x % MOD) % MOD;

        x = 1LL * x * x % MOD;
        n >>= 1;
    }
    return ans;
}

int main()
{
    fastIO();

    int n;
    cin >> n;
    while (n--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x,n) << nl;
    }

    return 0;
}