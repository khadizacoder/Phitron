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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                cnt1++;
            else if (a[i] == 2)
                cnt2++;
            else if(a[i] == 3)
                cnt3++;
        }

        int ans = 0;
        int mn = min(cnt1, cnt3);
        ans+=mn;

        if(cnt2 > 1) ans+=(cnt2-1);
        
        cout << ans << nl;
    }

    return 0;
}