#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> arr(7);
        int mx = INT_MIN;
        int sum = 0;
        for(int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            mx=max(mx,arr[i]);
            sum+=arr[i];
        }
        int ans = -sum + 2*mx;
        cout << ans << '\n';
    }
    return 0;
}