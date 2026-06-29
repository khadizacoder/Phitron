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

    ll t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        ll acnt = 0, bcnt = 0;
        for(char c : s)
        {
            if(c == 'a')acnt++;
            else bcnt++;
        }
        cout << acnt << " " << bcnt << nl;
    }

    return 0;
}