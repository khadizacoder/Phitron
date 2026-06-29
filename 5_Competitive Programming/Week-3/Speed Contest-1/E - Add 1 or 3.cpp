#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m;
        cin >> n >> m;

        if(m >= n &&(m - n) % 2 == 0 && m <= 3*n)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}