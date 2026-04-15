#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        int zero = (N + 1) / 2;
        int one = N / 2;

        for (int i = 0; i < zero; i++)
            cout << '0';

        for (int i = 0; i < one; i++)
            cout << '1';

        cout << "\n";
    }
    return 0;
}