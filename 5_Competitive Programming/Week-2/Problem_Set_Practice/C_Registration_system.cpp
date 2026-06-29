// Problem link: https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> st;
    while (n--)
    {
        string s;
        cin >> s;

        if (st.find(s) == st.end())
        {
            cout << "OK" << endl;
            st[s]++;
        }
        else
        {
            cout << s << st[s] << endl;
            st[s]++;
        }
    }

    return 0;
}