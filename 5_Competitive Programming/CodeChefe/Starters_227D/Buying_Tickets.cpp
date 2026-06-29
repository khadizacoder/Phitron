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
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        string s; cin >> s;

        vector<pair<int, char>> p(n);
        int khaliseat = 0;
        for(int i = 0; i < n; i++)
        {
            p[i].first = a[i];
            p[i].second = s[i];
            if(s[i] == '0')khaliseat++;
        }

        sort(p.begin(), p.end());

        if(khaliseat < k) 
        {
            cout << -1 << nl;
            continue;
        }

        int cntk = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(p[i].second == '0' && cntk <= k)
            {
                ans+=p[i].first;
                cntk++;
            }
            if(cntk == k) break;
        }
        cout << ans << nl;
    }

    return 0;
}