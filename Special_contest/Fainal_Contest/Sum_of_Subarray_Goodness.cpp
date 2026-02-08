// #include <bits/stdc++.h>
// using namespace std;

// static const long long MOD = 1000000007;

// int main() {
//     int n;
//     cin >> n;
//     vector<long long> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     map<long long, vector<int>> pos;
//     for (int i = 0; i < n; i++) {
//         pos[a[i]].push_back(i);
//     }

//     long long totalSub = 1LL * n * (n + 1) / 2;
//     long long ans = 0;

//     for (auto &it : pos) {
//         long long val = it.first;
//         auto &p = it.second;

//         long long without = 0;
//         int last = -1;

//         for (int x : p) {
//             long long gap = x - last - 1;
//             without += gap * (gap + 1) / 2;
//             last = x;
//         }

//         long long gap = n - last - 1;
//         without += gap * (gap + 1) / 2;

//         long long with_val = totalSub - without;
//         ans = (ans + val % MOD * (with_val % MOD)) % MOD;
//     }

//     cout << ans << "\n";
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007LL;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Step 1: Input
    int n;
    cin >> n;

    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    // Step 2: Build map of positions
    // Key = value of element
    // Value = list of indices where it appears
    unordered_map<long long, vector<int>> pos;
    pos.reserve(n * 2);

    for(int i = 0; i < n; i++){
        pos[A[i]].push_back(i);
    }

    // Step 3: Precompute total subarrays
    long long totalSub = 1LL * n * (n + 1) / 2;  // n*(n+1)/2
    long long answer = 0;

    // Step 4: For each distinct value
    for(auto &it : pos){
        long long v = it.first;
        vector<int> &p = it.second;

        long long bad = 0;   // subarrays that DO NOT contain v
        int prev = -1;

        // Step 4a: Find gaps where v does not appear
        for(int idx : p){
            long long gap = idx - prev - 1;  // number of elements without v
            bad += gap * (gap + 1) / 2;      // subarrays fully inside gap
            prev = idx;
        }

        // Step 4b: Handle last gap after last occurrence
        long long lastGap = n - prev - 1;
        bad += lastGap * (lastGap + 1) / 2;

        // Step 5: Subarrays that DO contain v
        long long good = totalSub - bad;

        // Step 6: Contribution of value v
        long long contrib = (v % MOD) * (good % MOD) % MOD;

        // Step 7: Add to total answer
        answer = (answer + contrib) % MOD;
    }

    // Step 8: Print final answer
    cout << answer << '\n';
    return 0;
}
