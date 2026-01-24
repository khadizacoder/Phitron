#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    for(int i = 1; i <= n; i++)
        cout << i ;

    cout << endl;

    // for(int i = 2; i <= n-1; i++)
    //     cout << i << "   " << (n - i) + 1 << endl;

    for (int i = 2; i <= n-1; i++) {
        cout << i;
        int gap = n -2;

        if (gap > 0) {
            for (int j = 0; j < gap; j++) 
                cout << " ";
        }

        cout << n - i + 1;
        cout << endl;
    }

    for(int i = n; i >= 1; i--)
        cout << i ;


    return 0;
}