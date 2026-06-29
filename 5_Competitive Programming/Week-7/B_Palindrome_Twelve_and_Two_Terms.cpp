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

int main()
{
    fastIO();

    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        ll r = n % 12;
        ll a;

        if(r <= 9) a = r;
        else if(r == 10) a = 22;
        else a = 11;

        ll b = n - a;

        if(b < 0) cout << -1 << nl;
        else cout << a << " " << b << nl;
    }


    return 0;
}