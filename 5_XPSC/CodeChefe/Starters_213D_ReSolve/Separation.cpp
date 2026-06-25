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
        int n, x; cin >> n >> x;
        vector<int> a(n);
        int mx = 0;
        for(int &i:a) 
        {
            cin >> i;
            mx = max(mx, i);
        }

        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
            {
                ok = true; 
                break;
            }
        }

        if(ok || x > mx)
        {
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }

    return 0;
}