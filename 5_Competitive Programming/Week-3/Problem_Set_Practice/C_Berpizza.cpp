// Problem Link: https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int customer = 1;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ms2;
    vector<int> ans;

    for (int i = 1; i <= t; i++)
    {
        int person;
        cin >> person;

        if (person == 1)
        {
            int money;
            cin >> money;
            s.insert({customer, money});
            ms2.insert({money, -customer});
            customer++;
        }
        else if (person == 2)
        {
            int pos = s.begin()->first, m = s.begin()->second;
            ans.push_back(pos);

            s.erase(s.begin());
            ms2.erase(ms2.find({m, -pos}));
        }
        else
        {
            int pos = -ms2.rbegin()->second, m = ms2.rbegin()->first;

            ans.push_back(pos);

            ms2.erase(--ms2.end());
            s.erase({pos, m});
        }
    }
    for (int x : ans)
        cout << x << " ";
    cout << '\n';

    return 0;
}