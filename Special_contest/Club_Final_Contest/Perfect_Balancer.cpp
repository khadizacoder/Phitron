#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<long long int> pref(n + 1, 0);
    // pref[0] = a[0];
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i];

    int total = pref[n];

    for (int i = 1; i <= n; i++)
    {
        int left = pref[i - 1];
        int right = total - pref[i];

        if (left == right)
        {
            cout << pref[i] << " " << i;
            return 0;
        }
    }

    cout << "UNSTABLE\n";

    return 0;
}