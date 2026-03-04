#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, b;
    cin >> r >> b;
    int gren = 0;

    if (r < b)
    {
        gren += r;
        int x = b - gren;
        cout << gren * 5 + x * 2;
    }
    else if (r > b)
    {
        gren += b;
        int x = r - gren;
        cout << gren * 5 + x;
    }
    else if (r == b)
    {
        cout << r * 5;
    }

    return 0;
}