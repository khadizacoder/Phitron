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

        int l = 0, r = n-1, sum = a[0] + a[n-1];
        bool ok = true;
        while(l < r)
        {
            if(a[l] + a[r] != sum)
            {
                ok = false;
                break;
            }
            else 
            {
                l++; r--;
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}