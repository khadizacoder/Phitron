// Link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
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
    for(auto &i : a) cin >> i;

    for(int i = 0; i < q; i++)
    {
        int key, l = 0, r = n-1, mid;
        cin >> key;
        
        bool found = false;
        while(l <= r)
        {
            mid = l + (r-l)/2;
            if(key == a[mid])
            {
                found = true;
                break;
            }
            else if(key < a[mid])
            {
                r = mid-1;
            }
            else l = mid+1;
        }
        
        if(found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}