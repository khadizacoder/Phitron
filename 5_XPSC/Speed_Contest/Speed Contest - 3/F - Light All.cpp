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
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool ok = true;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                bool okCell = false;

                if(i > 0 && s[i - 1] == '1')
                    okCell = true;

                if(i + 1 < n && s[i + 1] == '1')
                    okCell = true;

                if(!okCell)
                {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "Yes" : "No") << nl;
    }

    return 0;
}