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
        int n, x;
        cin >> n >> x;

        string ans1(n, '0');
        string ans2(n, '0');
        string ans3(n, '0');

        for(int i = 0; i < n && x > 0; i++)
        {
            ans1[i] = '1';
            x--;
        }
        for(int i = n-1; i >= 0 && x > 0; i--)
        {
            if(x > 0)
            {
                ans2[i] = '1';
                x--;
            }
            if(x > 0)
            {
                ans3[i] = '1';
                x--;
            }
        }

        cout << ans1 << ans2 << ans3 << nl;
    }

    return 0;
}
