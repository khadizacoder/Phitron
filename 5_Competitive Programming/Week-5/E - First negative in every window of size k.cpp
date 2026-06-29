#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0;
    while (l < n)
    {
        queue<int> q;
        int i = k, move = l;

        if (i > 0)
        {
            if (a[l] < 0)
            {
                q.push(a[l]);
                break;
            }
            i--;
            move++;
        }
        else
        {
            if (q.front() != 0)
                cout << q.front() << " ";
            else cout << 0 << " ";

            l++;
        }
    }
    return 0;
}