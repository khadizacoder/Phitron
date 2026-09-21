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
        map<int,int> mp;

        int odd = 0, even1 = 0, even2 = 0, mx = 0;

        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;

            mx = max(mx, mp[x]);

            if(x % 2 == 0) 
            {
                if(x % 4 == 0) even1++;
                else even2++;
            }
            else odd++;
        }

        int ans = max({odd, even1, even2, mx});
        cout << ans << nl;
    }

    return 0;
}