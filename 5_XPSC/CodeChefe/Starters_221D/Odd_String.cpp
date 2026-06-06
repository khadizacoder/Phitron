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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        bool ok = true;
        // for (int i = 0; i < n; i++)
        // {
        //     for(int j = i+1; j < n; j++)
        //     {
        //         if(s[i] == s[j])
        //         {
        //             int x = j - i;
        //             if(x % 2 == 0)
        //             {
        //                 ok = false;
        //                 break;
        //             }
        //         }
        //     }
        // }
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > 2)
            {
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "YES" << nl;
        else 
            cout << "NO" << nl;
    }

    return 0;
}