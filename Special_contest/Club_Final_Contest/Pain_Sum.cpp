#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;

    vector<long long> a;
    for(int i = 1; i <= sqrt(n); i++)
        for(int j = 1; j <= 3; j++)
            a.push_back(i);

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        long long int cnt = 0;
        for(int i = l-1; i < r; i++)
            cnt+=a[i];

        cout << cnt << '\n';
    }

    return 0;
}