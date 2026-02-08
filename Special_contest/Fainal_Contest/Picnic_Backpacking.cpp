#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int j = 0; j < m; j++)
            cin >> B[j];

        int X;
        cin >> X;

        unordered_map<int, long long> freq;
        for (int b : B)
        {
            freq[b]++;
        }

        long long ans = 0;
        // for (int a : A)
        // {
        //     int need = X - a;
        //     if (freq.count(need))
        //     {
        //         ans += freq[need];
        //     }
        // }

        for (int a : A)
        {
            int need = X - a;

            auto it = freq.find(need);
            if (it != freq.end())
                ans += it->second;
        }

        cout << ans << '\n';
    }

    return 0;
}

// Brute force way

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;

//         vector<long long> a(n), b(m);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         for (int i = 0; i < m; i++) cin >> b[i];

//         long long k;
//         cin >> k;

//         long long ans = 0;

//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < m; j++)
//             {
//                 if(a[i] + b[j] == k)
//                     ans++;
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }