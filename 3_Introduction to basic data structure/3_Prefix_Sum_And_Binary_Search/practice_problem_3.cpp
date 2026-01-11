// Problem-3: Search Query

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

    int q;
    cin >> q;
    while (q--)
    {
        bool flag = false;
        int x;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == x)
                flag = true;
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}