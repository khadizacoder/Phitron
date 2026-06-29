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
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;

        for(int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            a.push_back(v);
        }

        while(a.size() > 1)
        {
            vector<int> b;
            for(int i = 0; i < a.size() - 1; i++)
            {
                int v = a[i] ^ a[i+1];
                b.push_back(v);
            }
            a = b;
        }
        cout << a[0] << nl;
    }

    return 0;
}