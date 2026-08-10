#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    vector<int> a(n);
    int totalSum = 0;
    for (auto &i : a)
    {
        cin >> i;
        totalSum += i;
    }

    int x = (totalSum + 1) / 2;
    sort(all(a));
    ll l = 0, r = n - 2, ans = a[n - 1];
    while (l <= r)
    {
        if (ans <= x)
        {
            if (ans + a[r] <= x)
            {
                ans += a[r];
                r--;
            }
            else
            {
                if(a[l]+ans <= x){
                    ans += a[l];
                    l++;
                }
                else break;
            }
        }
        else break;
    }

    cout << abs(x-ans) << nl;

    return 0;
}