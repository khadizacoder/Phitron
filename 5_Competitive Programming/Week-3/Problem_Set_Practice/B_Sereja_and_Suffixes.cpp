// Problem link : https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> st;
    vector<int> suffix(n);

    for(int i = n-1; i >= 0; i--)
    {
        st.insert(a[i]);
        suffix[i] = st.size();
    }

    while(m--)
    {
        int l;
        cin >> l;
        cout << suffix[l-1] << '\n';
    }

    return 0;
}