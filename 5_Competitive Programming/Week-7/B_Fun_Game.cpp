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

    int T; cin >> T;
    while(T--)
    {
        int n; cin >> n;
        string s, t; 
        cin >> s >> t;

        if(s == t || s[0] == '1')
        {
            cout << "YES\n";
            continue;
        }

        int pos = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        // if(pos != -1)
        // {
        //     bool ok = true;
        //     for(int i = 0; i < n; i++)
        //     {
        //         if(s[i] != t[i])
        //         {
        //             if(pos > i)
        //             {
        //                 ok = false;
        //                 break;
        //             }
        //         }
        //     }

        //     if(ok) cout << "YES\n";
        //     else cout << "NO\n";
        // }
        // else cout << "NO\n";

        if(pos == -1)
        {
            cout << "NO\n";
            continue;
        }

        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                if(pos > i)
                {
                    ok = false;
                    break;
                }
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}