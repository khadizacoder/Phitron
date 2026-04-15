#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    map<int, pair<int,int>> mp;
    for(int i = 0; i < n; i++)
    {
        if(mp.find(a[i]) == mp.end())
        {
            mp[a[i]].first = i + 1;
            mp[a[i]].second = i + 1;
        }
        else
        {
            mp[a[i]].second = i + 1;
        }
    }

    for(auto it : mp)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << "\n";
    }

    return 0;
}