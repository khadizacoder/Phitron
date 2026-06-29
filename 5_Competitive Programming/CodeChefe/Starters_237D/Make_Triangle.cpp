#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        vector<int> a = {x, y, z};
        sort(a.begin(), a.end());
        
        if(a[0] + a[1] > a[2])
            cout << 0 << nl;
        else
        {
            cout << (a[2] - (a[0] + a[1]))+1 << nl;
        }

    }
    return 0;
}