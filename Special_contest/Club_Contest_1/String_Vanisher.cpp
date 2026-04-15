#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans = 0;
        while(n)
        {
            n/=2;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}