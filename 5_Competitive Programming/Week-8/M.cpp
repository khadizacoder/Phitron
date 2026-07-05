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

    ll n; cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for(auto &i : a)
    {
        cin >> i;
        mx = max(mx, i);
    }

    vector<ll> remove;
    for(auto i : a)
        remove.push_back(mx-i);

    ll gc = 0;
    for(auto i : remove)
        gc = __gcd(gc, i);

    ll chor = 0;
    for(auto i : remove)
        chor+=i/gc;

    cout << chor << " " << gc;
    
    return 0;
}