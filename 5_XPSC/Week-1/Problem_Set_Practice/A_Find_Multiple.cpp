#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 1005; i++)
    {
        if (c * i >= a && c * i <= b)
        {
            cout << c * i << '\n';
            break;
        }
        else if (c * i > b)
        {
            cout << -1 << '\n';
            break;
        }
    }
    return 0;
}