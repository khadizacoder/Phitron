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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        map<int,int> mp;
        for(auto &x : a)
            mp[x]++;

        vector<int> freq;
        for(auto &it : mp)
        {
            if(it.first == a[0]) continue;
            freq.push_back(it.second);
        }

        sort(freq.begin(), freq.end());
        int ans = mp.size();
        for(auto f : freq)
        {
            if(k >= f)
            {
                ans--;
                k-=f;
            }
            else break;
        }
        cout << ans << nl;
    }

    return 0;
}