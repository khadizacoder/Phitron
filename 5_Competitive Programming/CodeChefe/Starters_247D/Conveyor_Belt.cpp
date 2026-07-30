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

    while (t--) {
        int n,p; cin >> n >> p;

        string s;
        cin >> s;

        int left = 0;
        for (int i = 0; i <p; i++) {
            if (s[i] == 'R')
                left++;
        }
        
        int right = 0;
        for (int i = n - 1; i >= p-1; i--) {
            if (s[i] == 'L')
                right++;
        }

        cout << min(left, right) << endl;
    }

    return 0;
}
