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
        int n; cin >> n;
        string st; cin >> st;

        for(int i = 0; i < n; i++)
        {
            if(st[i] >= 'A' && st[i] <= 'Z')
            {
                int c = st[i] + 32;
                st[i] = c;
            }
        }

        vector<int> freq(26, 0);
        for(auto c : st)
        {
            freq[c - 'a']++;
        }

        int firstMx = 0, secMx = 0;
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > firstMx)
            {
                secMx = firstMx;
                firstMx = freq[i];
            }
            else if(freq[i] > secMx)
                secMx = freq[i];
        }
        cout << firstMx + secMx << nl;

        // sort(freq.rbegin(), freq.rend());
        // cout << freq[0] + freq[1] << nl;
    }

    return 0;
}