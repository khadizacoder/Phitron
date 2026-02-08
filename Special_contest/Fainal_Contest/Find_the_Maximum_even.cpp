
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long mx_even = -1;
    
    long long ev_1 = -1, ev_2 = -1;
    long long odd_1 = -1, odd_2 = -1; 
    
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        if (x % 2 == 0) {
            mx_even = max(mx_even, x);

            if (x > ev_1) {
                ev_2 = ev_1;
                ev_1 = x;
            } else if (x > ev_2) 
                ev_2 = x;

        } else {
            if (x > odd_1) {
                odd_2 = odd_1;
                odd_1 = x;
            } else if (x > odd_2)
                odd_2 = x;
            
        }
    }

    long long ans = mx_even;

    if (ev_1 != -1 && ev_2 != -1) {
        ans = max(ans, ev_1 + ev_2);
    }

    if (odd_1 != -1 && odd_2 != -1) {
        ans = max(ans, odd_1 + odd_2);
    }

    cout << ans << endl;
    return 0;
}