// Link : https://codeforces.com/problemset/problem/1618/C

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

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<ll> a(n);
        for(auto &i:a) cin >> i;

        ll GCD1 = 0, GCD2 = 0;
        for(int i = 0; i < n; i+=2)
            GCD1 = __gcd(GCD1, a[i]);

        for(int i = 1; i < n; i+=2)
            GCD2 = __gcd(GCD2, a[i]);
            
        ll ans = 0;
        bool ok = true;
        for(int i = 1; i < n; i+=2)
            if(a[i] % GCD1 == 0)
                ok = false;

        if(ok)
            ans = GCD1;
        else{
            ok = true;
            for(int i = 0; i < n; i+=2)
                if(a[i] % GCD2 == 0)
                    ok = false;

            if(ok) ans = GCD2;
        }

        cout << ans << nl;
    }

    return 0;
}