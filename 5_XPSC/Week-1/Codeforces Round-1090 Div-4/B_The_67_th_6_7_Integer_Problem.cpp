#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n = 7;
        vector<int> a(n);
        int mx = INT_MIN;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            sum += a[i];
        }

        int ans = -sum + mx + mx;
        cout << ans << "\n";
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n = 7;
//         vector<int> a(n);
//         for(int i = 0; i < n; i++)
//             cin >> a[i];

//         int ans = INT_MIN;
//         for(int i = 0; i < n; i++)
//         {
//             int sum = 0;
//             for(int j = 0; j < n; j++)
//             {
//                 if(i == j) sum+=a[j];
//                 else sum-=a[j];
//             }
//             ans=max(ans, sum);
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }