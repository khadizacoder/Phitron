// Problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

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
    int cnt = 0;
    vector<int> ans;
    
    while (r < m)
    {
        if ( l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            ans.push_back(cnt);
            r++;
        }
    }

    for(int v : ans) cout << v << " ";

    return 0;
}