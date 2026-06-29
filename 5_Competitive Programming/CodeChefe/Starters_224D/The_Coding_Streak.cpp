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

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        
        int l = 0, r = 0, ans = 0;
        while(r < n)
        {
            if(a[r] == 0)
            {
                r++;
                l = r;
            }
            else{
                ans = max(ans, r-l+1);
                r++;
            }
        }
        cout << ans << "\n";
    }
}
