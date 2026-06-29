// Problem link: https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string st;
        cin >> st;

        int ans = n;

        int i = 0, j = n-1;
        while(i <= j)
        {
            if(st[i] == st[j])
            {
                break;
            }
            else
            {
                i++; j--;
                ans-=2;
            }
        }
        cout << ans << nl;
    }
    return 0;
}