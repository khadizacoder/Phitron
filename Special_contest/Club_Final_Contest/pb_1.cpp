#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string st;
    cin >> st;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1' && st[i + 1] == '0' && st[i + 2] == '1')
        {
            cnt++;
        }
        else if (st[i] == '0' && st[i + 1] == '1' && st[i + 2] == '0')
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}