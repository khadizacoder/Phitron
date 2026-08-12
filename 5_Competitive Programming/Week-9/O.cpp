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

int n; 
vector<ll> a;
ll ans = LLONG_MAX, total = 0;

void solve(int index, ll group1)
{
    if(n == index)
    {
        ll group2 = total - group1;
        ll dif = abs(group1 - group2);
        ans = min(ans, dif);
        return;
    }

    solve(index+1, group1 + a[index]);
    solve(index+1, group1);
}

int main()
{
    fastIO();

    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        total+=a[i];
    }

    solve(0, 0);
    cout << ans << "\n";


    return 0;
}