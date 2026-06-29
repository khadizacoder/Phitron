#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y; cin >> x >> y;
    int ans = x*y;
    if(ans >= 100)
        cout << "Yes\n";
    else 
        cout << "No\n";
        
    return 0;
}