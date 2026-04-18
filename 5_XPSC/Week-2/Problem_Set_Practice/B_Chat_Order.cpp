// Problem link : https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> st;
    vector<string> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = n-1; i >= 0; i--)
    {
        if(st.find(a[i]) == st.end()){
            st.insert(a[i]);
            cout << a[i] << endl;
        }
    }

    return 0;
}