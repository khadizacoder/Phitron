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

// Y=min(Bi​,max(Ai​,Y))
int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<pair<int,int>> p(n);
        for(int i = 0; i < n; i++)
        {
            int x, y; cin >> x >> y;
            p[i].first = x;
            p[i].second = y;
        }

        int y = 100;
        for(int i = 0; i < n; i++)
        {
            auto a = p[i].first;
            auto b = p[i].second;

            if(y < a) y = a;
            else if(y > b) y = b;
        }
        cout << y << nl;
    }

    return 0;
}