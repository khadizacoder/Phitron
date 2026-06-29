#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    int num = abs(x - y);

    if(num <= k)
        cout << "Yes\n";
    else cout << "No\n";

    return 0;
}