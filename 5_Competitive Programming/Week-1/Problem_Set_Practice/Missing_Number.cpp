#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
        
    sort(arr.begin(), arr.end());
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i)
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}