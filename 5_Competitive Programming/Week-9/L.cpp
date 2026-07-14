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

    string st; cin >> st;
    int n = st.size();

    vector<int> freq(26);
    for(int i = 0; i < n; i++)
    {
        // cout << st[i] - 'A' << nl;
        freq[st[i] - 'A']++;
    }

    int oddCnt = 0;
    for(int i = 0; i < 26; i++)
        if(freq[i] % 2 != 0)
            oddCnt++;

    string st1 = "", st2 = "", stodd = "";

    if(oddCnt > 1)
        cout << "NO SOLUTION\n";
    else{
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] % 2 == 0)
            {
                int x = freq[i]/2;
                st1+=string(x, i+'A');
    
                x = freq[i]/2;
                st2+=string(x, i+'A');
            }
            else {
                int x = freq[i];
                stodd+=string(x, i+'A');
            }
        }
    }

    reverse(st2.begin(), st2.end());
    cout << st1 << stodd << st2 << nl;

    return 0;
}