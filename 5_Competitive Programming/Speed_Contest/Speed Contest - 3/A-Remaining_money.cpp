#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int buy = a * b;
    cout << n - buy << nl;
    
    return 0;
}