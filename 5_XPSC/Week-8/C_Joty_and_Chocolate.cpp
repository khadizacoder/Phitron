#include <bits/stdc++.h>
#include <numeric>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    fastIO();

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll divisableA = (n / a) * p;
    ll divisableB = (n / b) * q;

    ll common = (n / LCM(a,b));
    ll ans = (divisableA + divisableB) - common * (p + q) + common * max(p, q);

    cout << ans << nl;

    return 0;
}