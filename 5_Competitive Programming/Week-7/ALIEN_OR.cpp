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
        int n, k; cin >> n >> k;
        vector<string> a(n);
        for(auto &i: a) cin >> i;

        string target(k, '0');
        string ans = "YES";

        for(int i = 0; i < k; i++)
        {
            target[i] = '1';

            int flag = 0;
            for(auto v : a)
            {
                if(v == target)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                ans = "NO";
            }

            target[i] = '0';
        }

        cout << ans << nl;
    }

    return 0;
}