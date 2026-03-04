#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, y;
        cin >> n >> y;

        if(n >= y)
        {
            cout << n / y << endl;
        }
        else cout << 0 << endl;
    }
    
    return 0;
}