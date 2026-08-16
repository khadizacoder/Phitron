#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, first = -1, second = -1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]){
                cnt++;

                if (first == -1)
                    first = i;
                else if (second == -1)
                    second = i;
            }
        }

        if (cnt <= 1) {
            cout << s << '\n';
        }
        else if (cnt >= 3) {
            cout << "01\n";
        }
        else {
            string l = s.substr(0, second), r = s.substr(first);
            cout << min(l, r) << '\n';
        }
    }

    return 0;
}