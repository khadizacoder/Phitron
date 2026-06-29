// Even + Even = Even
// Even + Odd  = Odd
// Odd  + Even = Odd
// Odd  + Odd  = Even

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
        for(int &i: a) cin >> i;

        int odd = 0, even = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0) even++;
            else odd++;
        }

        if(odd == 0)
        {
            cout << 0 << nl;
        }
        // else if(odd >= 1 && even == 0)
        // {
        //     cout << ceil(odd) << nl;
        //     cout << (2*odd - 1)/ 2 << nl;
        // }
        else cout << even + (odd+1)/2 << nl;
    }

    return 0;
}