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
const int B = 30;

int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        vector<int> bits(B+1);
        for(int i = 0; i < n; i++)
        {
            for(int k = B; k >= 0; k--)
            {
                if((a[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }

        int ans = 0;
        for(int k = B; k >= 0; k--)
        {
            if(bits[k] == n)
            {
                ans+=(1LL << k);
            }
            else{
                int need = n - bits[k];
                if(m >= need)
                {
                    ans+=(1LL << k);
                    m-=need;
                }
            }
        }
        cout << ans << nl;
    }

    return 0;
}