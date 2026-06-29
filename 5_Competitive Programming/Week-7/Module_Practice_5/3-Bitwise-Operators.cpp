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

    int n = 5, y = 17;

    // AND operator
    // int ans = (n & y);

    // OR operator
    // int ans = (n | y);

    // XOR operator
    // int ans = (n ^ y);
    // cout << ans ;

    // LEFT shift
    cout << (9 << 1) << nl; // protibar current value ar shate 2 gun hobe

    // RIGHT shift
    cout << (9 >> 2) << nl; // protibar current value ar shate 2 vag hobe

    // 2 ar PAWER bar korar short cut tacnique
    //cout << (1 << 4) << nl; // 2^4 = 16 [paw(2,4)]

    ll ans = 20;
    cout << (1LL << ans) << nl;

    return 0;
}