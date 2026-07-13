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
        int r, y; cin >> r >> y;

        if(r == 0 && y > 0) cout << y/2 << nl;
        else if(r > 0 && y == 0) cout << r << nl;
        else{
            int extra = max(0, y-(r+1));
            cout << r + (extra+1)/2 << nl;
        }
    }

    return 0;
}