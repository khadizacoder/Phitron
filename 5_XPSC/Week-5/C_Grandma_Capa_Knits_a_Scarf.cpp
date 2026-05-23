#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 2e5;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int l = 0, r = n - 1;
            bool flg = true;
            int cnt = 0;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == c)
                {
                    cnt++;
                    l++;
                }
                else if (s[r] == c)
                {
                    cnt++;
                    r--;
                }
                else
                {
                    flg = false;
                    break;
                }

            }
            if (flg)
                ans = min(ans, cnt);
        }

        if (ans == (int)2e5)
            ans = -1;
        cout << ans << nl;
    }

    return 0;
}