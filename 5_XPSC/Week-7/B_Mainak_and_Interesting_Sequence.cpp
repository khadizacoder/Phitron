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
        int n, s; cin >> n >> s;
        if(n > s)
        {
            cout << "No\n";
            continue;
        }

        vector<int> ans(n,1);
        // n odd
        if(n % 2 == 1)
        {
            int extra = s-n;
            ans.back() += extra;
        }
        else{
            // n even
            if(s % 2 == 0)
            {
                // sum even
                int extra = s-n;
                ans[0] += extra / 2;
                ans[1] += extra / 2;
            }
            else{
                cout << "No\n";
                continue;
            }
        }

        cout << "Yes\n";
        for(auto i: ans) cout << i << " ";
        cout << nl;
    }

    return 0;
}