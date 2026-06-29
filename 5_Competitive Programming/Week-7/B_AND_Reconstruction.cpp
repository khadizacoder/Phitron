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
        vector<int> b(n-1);
        for(auto &i: b) cin >> i;

        vector<int> a;
        a.push_back(b[0]);
        for(int i = 0; i < n-1; i++)
        {
            a.back() = a.back() | b[i];
            a.push_back(a.back() & b[i]);
        }

        bool ok = true;
        for(int i = 0; i < n-1; i++)
        {
            if(b[i] != (a[i] & a[i+1]))
            {
                ok = false;
            }
        }\

        if(!ok)
        {
            cout << -1 << nl;
            continue;
        }

        for(auto i:a) cout << i << " ";
        cout << nl;
    }

    return 0;
}