#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, b, g;
        cin >> r >> b >> g;

        if(r == b && r == g && b == g)
            cout << r*10 << '\n';
        else{
            int mn = min({r, b, g});
            if(mn == 0)
            {
                cout << r*3 + b*3 + g*3 << '\n';
            }
            else
            {
                int x = mn*10;
                int ans =( r - mn) + (b - mn) + (g-mn);
                cout << (ans * 3) + x << '\n';
            }
        }
    }
    
    return 0;
}