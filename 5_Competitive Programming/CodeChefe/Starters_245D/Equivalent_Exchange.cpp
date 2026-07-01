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
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        
        bool ok = false;
        for(int i = 0; i <= k; i++)
        {
            int blue = k-i, red = i;
            bool flag = true;
            for(int j = 0; j < n;j++)
            {
                if(a[j] > 0)
                {
                    red += abs(a[j]);
                    blue -= abs(a[j]);
                }
                else{
                    red-=abs(a[j]);
                    blue+=abs(a[j]);
                }

                if(red < 0 || blue < 0)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                ok = true;
                break;
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}