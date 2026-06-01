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
        string s; cin >> s;

        int good = 0, bad = 0, one = 0, zero = 0;
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] == s[n-i-1])
            {
                good++;
                if(s[i] == '0') zero++;
                else one++;
            }
            else bad++;
        }

        if(good == k) cout << "YES\n";
        else if(good < k)
        {
            int lagbe = k - good;
            if(lagbe % 2 == 0 && bad >= lagbe)
                cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            int komabo = good - k;
            if(komabo % 2 == 0 && komabo <= 2*zero && komabo <= 2*one)
                cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}