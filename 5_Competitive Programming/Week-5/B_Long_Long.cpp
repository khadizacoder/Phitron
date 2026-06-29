// Problem link : https://codeforces.com/problemset/problem/1843/B
// Topic: two pointer approach

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll l = 0, op = 0, cnt = 0, cntn = 0;
        bool flag = false;

        while(l < n)
        {
            if(flag == false && a[l] < 0)
            {
                cntn+=a[l];
                op++;
                flag = true;
                l++;
            }
            else if(flag == true && a[l] <= 0)
            {
                cntn+=a[l];
                l++;
            }
            else
            {
                cnt+=a[l];
                flag = false;
                l++;
            }
        }
        ll v = cntn * -1;
        cout << v + cnt << " " << op << nl;
    }
    return 0;
}