#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x = 4 - n;
    int ans = 1000 * pow(2, x);
    cout << ans << '\n';

    return 0;
}