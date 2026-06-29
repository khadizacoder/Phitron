#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
    {
        int n, m; cin >> n >> m;
        
        // if(n % 2 == 0 && m % 2 == 0)
        // {
        //     if(n > m || n * 3 < m)
        //     {
        //         cout << "NO\n";
        //     }
        //     else cout << "YES\n";
        // }
        // else if(n % 2 != 0 && m % 2 != 0)
        // {
        //     if(n > m || n * 3 < m)
        //     {
        //         cout << "NO\n";
        //     }
        //     else cout << "YES\n";
        // }
        // else cout << "NO" << "\n";

        if((n % 2 == m % 2) && (n <= m && m <= n*3))
            cout << "YES\n";
        else cout << "NO\n";


        // if((n-m) % 2 == 0 && n <= m && m <= n*3)
        //     cout << "YES\n";
        // else cout << "NO\n";
        
    }
}
