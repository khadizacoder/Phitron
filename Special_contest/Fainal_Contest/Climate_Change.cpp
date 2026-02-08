
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long total_sum = 0;
    for (long long val : a)
        total_sum += val;

    long long prefix_sum = 0;
    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        prefix_sum += a[i];

        if (2 * prefix_sum == total_sum) 
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}