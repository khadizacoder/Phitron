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
        int n, k;
        cin >> n >> k;
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        cout << k - st.size() << nl;
    }

    return 0;
}