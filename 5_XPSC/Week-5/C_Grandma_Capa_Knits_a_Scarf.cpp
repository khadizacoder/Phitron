#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n-1, ans = 0;
        while (l < r)
        {
            if(s[l] != s[r])
            {
                if(s[l] == s[r-1])
                {
                    r--;
                    ans++;
                }
                else if(s[l+1] == s[r])
                {
                    l++;ans++;
                }
            }
            else
            {
                l++;r--;
            }
        }
        cout << ans << nl;
    }

    return 0;
}