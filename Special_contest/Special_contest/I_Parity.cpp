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
        if (N % 2 != 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}