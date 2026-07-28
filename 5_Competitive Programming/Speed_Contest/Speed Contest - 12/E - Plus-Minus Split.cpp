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
        for(int &i : a) cin >> i;

        bool ok = true;
        for(int i = 1; i < n; i++)
        {
            if(a[i] != a[0])
            {
                ok = false;
                break;
            }
        }

        if(ok)
        {
            cout << "Yes\n";
            continue;
        }

        bool ans = false;
        for(int i = 0; i < n; i++)
        {
            int x = a[i];
            bool ok = true;

            for(int j = 0; j < n; j++)
            {
                int val;
                if(j < i)
                {
                    val = a[j] + x;
                }
                else{
                    val = a[j] - x;
                }

                if(val != 0) 
                {
                    ok = false;
                    break;
                }
            }

            if(ok)
            {
                ans = true;
                break;
            }
        }

        if(ans) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}