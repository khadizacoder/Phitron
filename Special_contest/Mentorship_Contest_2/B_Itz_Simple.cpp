#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
        int n, k, p;
        cin >> n >> k >> p;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mx = 0;
        int chair = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            chair = chair + a[i];
        }

        int vedChair = k + mx;
        int varunChair = p + (chair - mx);

        if (vedChair > varunChair)
            cout << "Ved\n";
        else if (vedChair < varunChair)
            cout << "Varun\n";
        else
            cout << "Equal\n";
    }

    return 0;
}