// Problem link: https://codeforces.com/problemset/problem/1974/B

#include <bits/stdc++.h>
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

        string uniq = "";
        map<char,int> mp;
        for(int i = 0; i < n; i++)
        {
            if(mp[s[i]] == 0)
            {
                mp[s[i]]++;
                uniq.push_back(s[i]);
            }
        }

        sort(uniq.begin(), uniq.end());

        map<char,char> sy;
        int i = 0, j = uniq.size() - 1;
        while(i <= j)
        {
            sy[uniq[i]] = uniq[j]; 
            sy[uniq[j]] = uniq[i];
            i++; j--;
        }

        for(int i = 0; i < n; i++)
        {
            s[i] = sy[s[i]];
        }
        cout << s << '\n';
    }
    return 0;
}