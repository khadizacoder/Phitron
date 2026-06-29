#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S, T;
    cin >> S >> T;

    int count = 0;
    for (int k = 0; k < 105; k++)
    {
        for (int i = 0; i < 105; i++)
        {
            for (int j = 0; j < 105; j++)
            {
                if (i + k + j <= S && i * k * j <= T)
                {
                    count++;
                }
                // cout << i << " " << k << " " << j << '\n';
            }
        }
    }
    cout << count << '\n';
    return 0;
}