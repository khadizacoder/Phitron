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

bool palindrom(int n)
{
    string s = to_string(n);
    string st = s;
    reverse(st.begin(), st.end());
    return s == st;
}

int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int l, r; cin >> l >> r;
        ll sum = 0;
        for(int i = l; i <= r; i++)
        {
            if(palindrom(i))
                sum+=i;
        }
        cout << sum << nl;
    }

    return 0;
}