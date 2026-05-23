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
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> pre(n);
        pre[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            pre[i] = min(pre[i-1], a[i]);
        }

        vector<int> suff(n);
        suff[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            suff[i] = max(suff[i+1], a[i]);
        }

        string st1 = "";
        string st2 = "";
        string st3 = "";

        for(int i = 0; i < n; i++)
        {
            if(pre[i] == pre[i-1]) break;
            st1.push_back('1');
        }

        for(int i = n-1; i >= 0; i--)
        {
            if(suff[i] == suff[i+1]) break;
            st2.push_back('1');
        }

        int v = n - (st1.size() + st2.size());

        for(int i = 0; i < v; i++)
            st3.push_back('0');

        // for(int v : pre) cout << v << " ";
        cout << st1 << st3 << st2 << nl;
    }

    return 0;
}