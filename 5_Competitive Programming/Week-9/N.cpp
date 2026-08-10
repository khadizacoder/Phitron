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
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    // Sliding window
    ll l = 0, r = 0, ans = 0;
    map<int,int> freq;

    while(r < n){
        freq[a[r]]++;

        while (freq.size() > k)
        {
            freq[a[l]]--;

            if(freq[a[l]] == 0)
                freq.erase(a[l]);

            l++;
        }

        ans+=r-l+1;
        r++;
    }

    cout << ans << nl;

    return 0;
}