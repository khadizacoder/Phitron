// Problem Link: https://codeforces.com/problemset/problem/1669/E

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

        ll ans = 0;
        map<char,int> first, sec;
        map<string,int> total;

        while(n--)
        {
            string st;
            cin >> st;

            char a = st[0];
            char b = st[1];

            int curr = first[a] + sec[b];
            int extra = 2 * total[st];

            ans+=curr-extra;

            first[a]++;
            sec[b]++;
            total[st]++;
        }

        cout << ans << nl;
    }
    return 0;
}