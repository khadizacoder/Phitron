#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0;
    while (r < m || l < n)
    {
        if (r == m)
        {
            cout << a[l] << " ";
            l++;
        }
        else if (l == n)
        {
            cout << b[r] << " ";
            r++;
        }
        else if (a[l] <= b[r])
        {
            cout << a[l] << " ";
            l++;
        }
        else
        {
            cout << b[r] << " ";
            r++;
        }
    }
    return 0;
}