#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n < 67) cout << n+1 << '\n';
        else cout << n << '\n';
    }
    return 0;
}