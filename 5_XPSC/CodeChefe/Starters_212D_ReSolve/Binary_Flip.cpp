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
        string s; cin >> s;

        int one = 0, zero = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == '0' && s[i+1] == '0')zero++;
            if(s[i] == '1' && s[i+1] == '1')one++;
        }

        if(one >= zero)
            cout << 0 << nl;
        else{
            int deff = zero - one;
            cout << (deff+1)/2 << nl;
        }
    }

    return 0;
}