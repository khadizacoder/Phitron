#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int mx = n;
    int mn = n;
    while (cin >> n)
    {
       mx = max(mx, n);
       mn = min(mn, n);
    }
    cout << mn << " " << mx;
    
    return 0;
}