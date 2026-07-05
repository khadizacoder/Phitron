// Link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

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

    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    for(int i = 0; i < q; i++)
    {
        int key, l = 0, r = n-1, mid, ans = n;
        cin >> key;

        while(l <= r)
        {
            mid = l+(r-l)/2;
            if(key <= a[mid])
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid + 1;
        }
        cout << ans+1 << nl;
    }

    return 0;
}