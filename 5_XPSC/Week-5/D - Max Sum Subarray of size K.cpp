// Topic: Sliding Window
// Problem link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (r - l + 1 == k)
        {
            ans=max(ans, sum);
            sum-=a[l];
            l++;
            r++;
        }
        else 
        {
            r++;
        }
    }
    cout << ans << nl;
    return 0;
}