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
        int n; cin >> n;
        vector<int> a(n+1);

        ll totalCount = 0;
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            totalCount += a[i];
        }

        map<int,int> freq;
        for(int i = 1; i <= n; i++)
        {
            freq[a[i]]++;
        }

        int value = 0, maxFreq = 0;
        for(auto p : freq)
        {
            if(p.second > maxFreq){
                value = p.first;
                maxFreq = p.second;
            }
        }

        int otherVal = n - maxFreq;
        if(maxFreq <= otherVal+1)
        {
            cout << totalCount << nl;
        }
        else{
            ll ans = totalCount - (1LL * maxFreq * value);
            ans+= 1LL * (otherVal + 2) * value;
            cout << ans << nl;
        }
    }
    

    return 0;
}