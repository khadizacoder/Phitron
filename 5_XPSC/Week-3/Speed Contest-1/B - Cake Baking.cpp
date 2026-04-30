#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int x = m - n;
    
    if(x >= n)
        cout << n << '\n';
    else cout << x << '\n';

    return 0;
}