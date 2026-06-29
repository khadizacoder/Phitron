// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         vector<int> a(n);
//         for(int &i: a) cin >> i;

//         set<int> st;
//         int cnt = 0;

//         for(int i = 0; i < n; i++)
//         {
//             if(a[i] == 1)
//             {
//                 cnt++;
//                 st.insert(a[i]);
//             }
//             else {
//                 int x = a[i] - 1;
//                 if(st.find(x) != st.end())
//                 {
//                     st.insert(a[i]);
//                     cnt++;
//                 }
//             }

//         }
//         cout << cnt << "\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int need = 1, ans = 0;

        for (int x : a)
        {
            if (x == need)
            {
                ans++;
                need++;
            }
        }

        cout << ans << "\n";
    }
}

// JODI PRINT KORA LAGTO

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         vector<int> a(n);
//         for(int &i: a) cin >> i;

//         set<int> st;
//         vector<int> ans;
//         int cnt = 0;

//         for(int i = 0; i < n; i++)
//         {
//             if(a[i] == 1)
//             {
//                 cnt++;
//                 st.insert(a[i]);
//                 ans.push_back(a[i]);
//             }
//             else {
//                 int x = a[i] - 1;
//                 if(st.find(x) != st.end())
//                 {
//                     cnt++;
//                     st.insert(a[i]);
//                     ans.push_back(a[i]);
//                 }
//             }

//         }

//         for(int v : ans) cout << v << " ";
//         cout << "\n";
//     }
// }
