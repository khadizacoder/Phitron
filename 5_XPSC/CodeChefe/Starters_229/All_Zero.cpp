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
        int a, b, c;
        cin >> a >> b >> c;

        while(a != 0)
        {
            if(a < 0) break;
            else
            {
                a-=1;
                b-=2;
            }
        }

        while(b != 0)
        {
            if(b < 0) break;
            else
            {
                b-=1;
                c-=3;
            }
        }

        if(a == 0 && b == 0 && c == 0)
            cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}