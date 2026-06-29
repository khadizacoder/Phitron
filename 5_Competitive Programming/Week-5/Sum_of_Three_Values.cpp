// Topic: Two Pointers
// Problem link: https://cses.fi/problemset/task/1641

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int l = i+1;
        int r = n-1;
        while(l < r)
        {
            ll sum = a[i].first + a[l].first + a[r].first;
            if(sum > x) r--;
            else if(sum < x) l++;
            else
            {
                st.insert(a[i].second);
                st.insert(a[l].second);
                st.insert(a[r].second);

                for(auto v : st) cout << v + 1 << " ";
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}