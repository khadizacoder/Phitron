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
        vector<int> a(n);

        // int mxSetBit = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            // mxSetBit = max(mxSetBit , __lg(a[i]));
        }

        int xr = 0;
        for(int i = 0; i < n; i++ )
        {
            xr^=a[i];
            // for(int k = mxSetBit; k >= 0; k--)
            // {
            //     if((a[i] >> k) & 1)
            //     {
            //         cout << 1 << " ";
            //     }
            //     else cout << 0 << " ";
            // }
        }

        // if(xr == 0) 
        // {
        //     cout << xr << nl;
        //     continue;
        // }
        
        int mn = xr;
        for(int i = 0; i < n; i++)
        {
            int cur = xr ^ a[i];
            mn = min(mn, cur);
        }
        cout << mn << nl;
        
    }

    return 0;
}