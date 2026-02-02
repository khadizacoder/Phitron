#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        
        int voteA = 0;
        int voteB = 0;
        for (int i = 0; i < n; i++)
        {
            voteA = voteA + a[i];
            voteB = voteB + b[i];
        }

        if(voteA+x > voteB)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}