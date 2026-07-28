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
        string s1; cin >> s1;
        string s2; cin >> s2;

        string ans = "";

        for(int i = 0; i < 5; i++)
        {
            if(s1[i] == s2[i]) ans+='G';
            else ans+='B';
        }

        cout << ans << nl;
    }

    return 0;
}