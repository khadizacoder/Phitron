// Problem Link: https://codeforces.com/problemset/problem/2000/C

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int m;
        cin >> m;
        while (m--)
        {
            string st;
            cin >> st;

            map<int, char> mp1;
            map<char, int> mp2;

            if (st.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                int val = a[i];
                char ch = st[i];

                if (mp1.count(val) == 1)
                {
                    if (mp1[val] != ch)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                    mp1[val] = ch;

                if (mp2.count(ch) == 1)
                {
                    if (mp2[ch] != val)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                    mp2[ch] = val;
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}