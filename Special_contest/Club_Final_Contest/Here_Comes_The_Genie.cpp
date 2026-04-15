#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    long long cnt = 0;
    set<long long> s;
    
    for (int i = 1; i <= n; i++)
        s.insert(arr[i]);

    for (int v : s)
        cnt += v;

    cout << cnt << '\n';

    return 0;
}