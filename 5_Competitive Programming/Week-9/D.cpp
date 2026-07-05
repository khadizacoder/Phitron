// Link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

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

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    sort(a.begin(), a.end());
    int q; cin >> q;
    while(q--)
    {
        ll key1, key2; cin >> key1 >> key2;
        ll l = 0, r = n-1, mid;
        ll fast = -1, sec = -1;

        while(l <= r)
        {
            mid = l+(r-l)/2;
            if(key1 <= a[mid])
            {
                fast = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        l = 0; r = n-1;
        while(l <= r)
        {
            mid = l+(r-l)/2;
            if(key2 >= a[mid])
            {
                sec = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        // cout << (sec-fast)+1 << " ";
        if(fast == -1 || sec == -1 || fast > sec)
            cout << 0 << " ";
        else cout << (sec-fast)+1 << " ";
    }

    return 0;
}