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
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int one = -1, two = -1;
        for(int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                one = a[i];
                two = a[i+1];
                break;
            }
        }
        if(one == -1 && two == -1)
            cout << "NO\n";
        else
            cout << "YES\n" << 2 << nl << one << " " << two << nl;
    }

    return 0;
}