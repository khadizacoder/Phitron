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

    ll t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        
        string st; cin >> st;

        int ans = 0;
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int a = st[j] - '0';
                int b = st[j+1]-'0';
                if(a < b){
                    a = b;
                    st[j] = a + '0';
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            ans+=st[i] - '0';
        }
        cout << ans << nl;
    }

    return 0;
}