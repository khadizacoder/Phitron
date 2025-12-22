#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // for(int i = 0; i < sqrt(n); i++)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    //* Better way

    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //         cout << i << " " << n / i << endl;
    // }

    //* Different way

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " " << n / i << endl;
    }

    //? Note: int i = 1 neta hobe, 0 nela output 0 hobe

    return 0;
}