#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> l(n), r(n);
        for(int i = 0; i < n; i++) cin >> l[i];
        for(int i = 0; i < n; i++) cin >> r[i];

        vector<long long> mn(n), mx(n);
        long long base = 1;

        for(int i = 0; i < n; i++){
            mn[i] = min(l[i], r[i]);
            mx[i] = max(l[i], r[i]);
            base += mx[i];
        }

        sort(mn.begin(), mn.end(), greater<long long>());

        for(int i = 0; i < k-1; i++){
            base += mn[i];
        }

        cout << base << "\n";
    }

    return 0;
}
