#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int &i : a) cin >> i;
        // reverse(a.begin(), a.end());

        // for(int x : a) cout << x << " ";
        
        int ans = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] != i + 1) 
            {
                ans = a[i];
                break;
            }
        }
        cout << ans << "\n";
    }
}
