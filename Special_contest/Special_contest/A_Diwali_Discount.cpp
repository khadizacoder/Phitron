#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int pay = a - b;

    if(pay >= 0)
        cout << pay << endl;
    else cout << 0 << endl;

    return 0;
}