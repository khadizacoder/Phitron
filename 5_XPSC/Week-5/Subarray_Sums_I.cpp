#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0, sum = 0, ans = 0;
    while(l < r)
    {
        if(sum == x) break;
        if(sum + a[r] > x)
        {
            sum+=a[l];
            l++;
            ans++;
        }
        else
        {
            sum+=a[r];
            r--;
            ans++;
        }
    }
    cout << ans << nl;

    return 0;
}