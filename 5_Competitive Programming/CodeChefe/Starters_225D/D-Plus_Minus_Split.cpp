// brute force
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        set<int> st;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }

        if(st.size() == 1)
        {
            cout << "Yes\n";
            continue;
        }

        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            st.clear();

            for(int j = 0; j < n; j++)
            {
                if(j < i)
                {
                    int x = a[i] + a[j];
                    st.insert(x);
                }
                else{
                    int x = a[i] - a[j];
                    st.insert(x);
                }
            }

            if(st.size() == 1)
            {
                ok = true;
                break;
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}