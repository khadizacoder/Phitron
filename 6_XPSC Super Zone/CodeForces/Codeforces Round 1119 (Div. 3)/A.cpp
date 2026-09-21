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
        string st; cin >> st;

        int cnt = 0;
        string ans = "";
        for(int i = 0; i < n; i++)
        {
           ans+=st[i];

           if(ans.size() == k)
           {
                bool ok = false;
                for(int c: ans)
                {
                    if(c == '0')
                    {
                        ok = true;
                        break;
                    }
                }

                if(!ok) cnt++;
                ans="";
           }
        }

        cout << cnt << nl;
    }

    return 0;
}