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

        int total_jump = 0, ans = n;
        for(int i = 1; i <= n; i++)
        {
            int cur = n-i;

            if(i%2==1)
            {
                ans = ans - cur;
            }
            else{
                ans = ans + cur;
            }

            total_jump++;
            if(total_jump == n-1) break;
        }

        cout << ans << nl;
    }

    return 0;
}