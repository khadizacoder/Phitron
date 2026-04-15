// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         string st1, st2; // 0 idx
//         cin >> st1 >> st2;

//         int x = st2.size();
//         vector<long long int> ans(x+1);
//         ans[0] = 1;

//         for(char ch : st1)
//         {
//             for(int i = x; i >= 1; i--)
//             {
//                 if(ch == st2[i-1]) // 1 idx tai -1
//                 {
//                     ans[i]+= ans[i-1];
//                 }
//             }
//         }
//         cout << ans[x] << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         string st1, st2;
//         cin >> st1 >> st2;

//         int x = st2.size();

//         vector<long long> prev(x+1, 0), curr(x+1, 0);

//         prev[0] = curr[0] = 1;

//         for(char ch : st1)
//         {
//             for(int i = 1; i <= x; i++)
//             {
//                 curr[i] == prev[i];
//                 if(ch == st2[i-1])
//                 {
//                     curr[i] += prev[i-1];
//                 }
//             }
//             prev = curr;
//         }

//         cout << prev[x] << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
string st1, st2;
int dp[1005][1005];

int lcs(int i, int j)
{
    if (j < 0) return 1;
    if (i < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];

    int ans = 0;

    ans+= lcs(i - 1, j);

    if (st1[i] == st2[j])
        ans+= lcs(i-1, j-1);
    
    return dp[i][j] = ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> st1 >> st2;
        memset(dp, -1, sizeof(dp));

        int n = st1.size();
        int m = st2.size();

        cout << lcs(n - 1, m - 1) << endl;
    }
    return 0;
}