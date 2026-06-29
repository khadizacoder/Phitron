// Problem Link: https://codeforces.com/problemset/problem/501/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> st(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        bool replaced = false;
        for (int j = 0; j < st.size(); j++)
        {
            if (st[j].second == s1)
            {
                st[j].second = s2;
                replaced = true;
                break;
            }
        }

        if (!replaced)
        {
            st.push_back({s1, s2});
            cnt++;
        }
    }

    cout << cnt << endl;
    for (auto p : st)
    {
        cout << p.first << " " << p.second ;
        cout << '\n';
    }

    return 0;
}
