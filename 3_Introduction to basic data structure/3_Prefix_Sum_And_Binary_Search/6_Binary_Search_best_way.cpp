//* Optimized & Advanced Approach

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;

        if (binary_search(a.begin(), a.end(), x))
            cout << "Found" << endl;
        else
            cout << "Not found" << endl;
    }

    return 0;
}