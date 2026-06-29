// Problem link: https://codeforces.com/problemset/problem/1907/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;

        vector<int> cString;
        vector<int> lString;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] >= 'A' && st[i] <= 'Z' && st[i] != 'B')
                cString.push_back(i);
            if (st[i] >= 'a' && st[i] <= 'z' && st[i] != 'b')
            {
                lString.push_back(i);
            }

            if (!cString.empty() && st[i] == 'B')
                cString.pop_back();
            if (!lString.empty() && st[i] == 'b')
                lString.pop_back();
        }

        vector<int> ans;

        for (int x : lString)
            ans.push_back(x);
        for (int x : cString)
            ans.push_back(x);

        sort(ans.begin(), ans.end());
        for(auto x : ans)
        {
            cout << st[x];
        }
        cout << endl;
    }
    return 0;
}