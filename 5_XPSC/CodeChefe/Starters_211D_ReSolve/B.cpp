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
    while (t--)
    {
        int w, p, k; cin >> w >> p >> k;

        if(k <= w)
            cout << k*2 << nl;
        else{
            int x = k - w;
            cout << w*2+x << nl;
        }
    }
    

    return 0;
}