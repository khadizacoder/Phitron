
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<int, int> cnt;
    priority_queue<pair<int, int>> pq;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            cnt[x]++;
            pq.push({cnt[x], x});
        } 
        else {
            if (cnt.empty()) {
                cout << "empty\n";
                continue;
            }

            while (!pq.empty()) {
                auto [c, id] = pq.top();
                if (cnt.find(id) != cnt.end() && cnt[id] == c)
                    break;
                pq.pop();
            }

            if (pq.empty()) {
                cout << "empty\n";
            } else {
                auto [c, id] = pq.top();
                pq.pop();
                cout << id << "\n";
                cnt.erase(id);
            }
        }
    }

    return 0;
}