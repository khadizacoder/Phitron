// Problem link : https://codeforces.com/problemset/problem/1714/B

#include <bits/stdc++.h>
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

        set<int> st;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.find(a[i]) == st.end())
            {
                st.insert(a[i]);
                count++;
            }
            else break;
        }
        cout << n - count << '\n';
    }
    return 0;
}