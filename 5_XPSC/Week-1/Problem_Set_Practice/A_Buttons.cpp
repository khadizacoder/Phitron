#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = 1; i <= 2; i++)
    {
        if (a >= b)
        {
            count += a;
            a = a - 1;
        }
        else if (b >= a)
        {
            count += b;
            b = b - 1;
        }
    }

    cout << count << '\n';
    return 0;
}