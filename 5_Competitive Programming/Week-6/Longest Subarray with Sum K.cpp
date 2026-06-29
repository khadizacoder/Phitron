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

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    map<int, int> mp;
    int sum = 0, ans = 0;

    for(int i = 0; i < n; i++)
    {
        sum+=a[i];

        if(sum == k)
        {
            ans = max(ans, i+1);
        }

        int need = sum - k;
        if(mp.find(need) != mp.end())
        {
            ans = max(ans, i - mp[need]);
        }

        if(mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    cout << ans << nl;

    return 0;
}