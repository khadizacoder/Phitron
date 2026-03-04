#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // int cnt = 0;
        // if(a >= b) cnt+=a;
        // else if(a < b) cnt+=b;

        // if(c >= d) cnt+=c;
        // else if(c < d) cnt+= d;

        int cnt = max(a, b) + max(c, d);

        cout << cnt << endl;
    }

    return 0;
}