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
        multiset<pair<char, char>> ms;
        for (int i = 0; i < n; i++)
        {
            char x, y;
            cin >> x >> y;
            ms.insert({x,y});
        }

        long long int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            auto it = ms.begin();

            // if(ms.find(it->first) )


            // for (int j = i + 1; j < n; j++)
            // {
            //     if (a[i] == a[j])
            //         continue;
            //     else if (a[i].first == a[j].first || a[i].second == a[j].second)
            //         cnt++;
            // }
        }

        cout << cnt << '\n';
    }
    return 0;
}