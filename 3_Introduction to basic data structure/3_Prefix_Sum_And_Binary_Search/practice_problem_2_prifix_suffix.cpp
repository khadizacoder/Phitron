#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // prifix sum
    vector<int> ps(n);
    ps[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + v[i];
    }

    // suffix sum
    vector<int> ss(n);
    ss[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ss[i] = ss[i + 1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (ps[i] == ss[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}