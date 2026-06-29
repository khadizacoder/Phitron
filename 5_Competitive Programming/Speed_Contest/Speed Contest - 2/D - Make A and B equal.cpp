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
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES\n";
        }
        else if (a > b)
        {
            while (a > b)
            {
                b *= 2;
            }

            if (b == a)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if(a < b)
        {
            while(a < b)
            {
                a*= 2;
            }
            if (a == b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}