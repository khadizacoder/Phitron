#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        string s;
        cin >> s;

        bool ok = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'z') {
                ok = true;
                s[i] = 'a';
            }
            else if (ok) {
                break;
            }
        }

        cout << s << '\n';
    }

    return 0;
}