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

    int n, k; cin >> n >> k;
    string s; cin >> s;

    map<char,int> cnt;
    ll l = 0, r = 0, ans = -1;
    while(r < n)
    {
        cnt[s[r]]++;

        if(cnt.size() == k)
        {
            ans = max(ans, r-l+1);
        }
        else{
            while(cnt.size() > k && l <= r)
            {
                cnt[s[l]]--;
                if(cnt[s[l]] == 0)
                    cnt.erase(s[l]);
                l++;
            }
        }

        r++;
    }
    cout << ans << nl;

    return 0;
}