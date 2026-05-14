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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());
        int cnt = 0, move = 0;

        for(int i = 0; i < n; i++)
        {
            if(move == k) break;
            if(a[i] == a[i + 1])
            {
                cnt++;
            }
            else
            {
                cnt++;
                move++;
            }
        }

        if(x < cnt)
            cout << x << nl;
        else cout << cnt << nl;

    }
    return 0;
}