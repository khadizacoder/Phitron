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
        for(int &i:a) cin >> i;

        int XR = 0;
        for(int i = 0; i < n; i++)
            XR^=a[i];

        if(n%2 == 0)
        {
            if(XR == 0)
                cout << 0 << nl;
            else
                cout << -1 << nl;
        }
        else 
            cout << XR << nl;
    }

    return 0;
}