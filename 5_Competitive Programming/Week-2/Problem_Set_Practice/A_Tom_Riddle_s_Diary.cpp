// Problem link : https://codeforces.com/problemset/problem/855/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> st;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(st.find(s) == st.end())
        {
            st.insert(s);
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
    return 0;
}