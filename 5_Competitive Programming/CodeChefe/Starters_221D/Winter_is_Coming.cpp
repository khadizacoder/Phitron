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

    int t; cin >> t;
    while(t--)
    {
        int n, A, B;
        cin >> n >> A >> B;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int cnt = 0;
        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            if(a[i] < A && ok == false)
            {
                ok = true;
                cnt++;
            }
            // else if(a[i] > B && ok == true)
            else if(a[i] > B)
            {
                ok = false;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}