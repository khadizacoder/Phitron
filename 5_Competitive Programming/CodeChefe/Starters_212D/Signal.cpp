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
        string s; cin >> s;

        int idx = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                idx = i+1;
                break;
            }
        }

        if(idx == 0)
            cout << 0 << nl;
        else{
            int ans = 0;
            for(int i = idx; i < n; i++)
            {
                if(s[i] == '1')
                {
                    ans++;
                }
            }
            cout << ans << nl;
        }
    }

    return 0;
}