#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> count(n+1, 0);
    for (int i = 2; i <= n-1; i++)
    {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
            count[i] = 1;
    }

    vector<int> freq(n+1, 0);
    freq[1] = count[1];
    for(int i = 2; i < n; i++)
    {
        freq[i] = freq[i - 1] + count[i];
    }

    for(int i = 1; i < n ; i++)
    {
        cout << freq[i] << " ";
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int cnt = 0;

        // int ans = freq[r] - freq[l];

        cout << freq[r] << endl;
    }

    return 0;
}