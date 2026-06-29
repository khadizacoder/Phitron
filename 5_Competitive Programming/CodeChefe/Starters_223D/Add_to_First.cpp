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

    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector<ll> a(n), b(n);

        for(ll &i : a)  cin >> i;
        for(ll &i : b) cin >> i;

        bool ok = true;
        ll prefMax = -1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= prefMax)
            {
                if(b[i] != a[i])
                {
                    ok = false;
                    break;
                }
            }
            else{
                if(b[i] < a[i])
                {
                    ok = false;
                    break;
                }
            }
            prefMax = max(prefMax, a[i]);
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}


// bool ok = true;
// long long prefMax = -1;

// for (int i = 0; i < N; i++) {
//     if (A[i] <= prefMax) {
//         // cannot increment this position at all
//         if (B[i] != A[i]) {
//             ok = false;
//             break;
//         }
//     } else {
//         // can increment freely, but not decrease
//         if (B[i] < A[i]) {
//             ok = false;
//             break;
//         }
//     }
//     prefMax = max(prefMax, A[i]);
// }
