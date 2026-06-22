#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a = (x - y);
        int b = (x + y);

        int h = (x - z);
        int k = (x + z);

        cout << min(abs(a-b), abs(h-k)) << "\n";
    }
    return 0;
}