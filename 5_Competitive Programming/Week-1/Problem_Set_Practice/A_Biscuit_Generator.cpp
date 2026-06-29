#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    double t;
    cin >> a >> b >> t;
    for (int i = 1; i <= 21; i++)
    {
        if (a * i > t + 0.5)
        {
            cout << (i-1) * b;
            break;
        }
    }
    return 0;
}