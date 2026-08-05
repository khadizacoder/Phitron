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

    int T; cin >> T;
    while(T--)
    {
        int A,B,C; cin >> A >> B >> C;

        vector<int> a = {A,B,C};
        sort(all(a));

        if(A == B || A == C || B == C)
        {
            cout << 0 << nl;
        }
        else{
            int x = abs(a[0] - a[1]);
            int y = abs(a[2] - a[1]);
            cout << min(x,y) << nl;
        }
    }

    return 0;
}