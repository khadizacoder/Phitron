#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector<long long int> a(n+1);
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    vector<long long int>pref(n+1, 0);
    for(int i = 1; i <= n; i++)
        pref[i] = pref[i-1] + a[i];

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        
        long long int cnt = pref[r] - pref[l-1];
        cout << cnt << endl;
    }
    return 0;
}