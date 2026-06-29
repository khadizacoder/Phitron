#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    // sort(arr.begin(), arr.end());
    vector<int> freq(101, 0);

    for (int i = 0; i < n; i++)
    {
        // if (i != arr[i] && i != x)
        // {
        //     count++;
        //     cout << i << " ";
        // }
        // if (arr[i] == x)
        //     count++;
        freq[arr[i]]++;
    }

    for (int i = 0; i <= x; i++)
    {
        if (freq[i] == 0 && i != x)
            count++;
        if (freq[i] == 1 && i == x)
        {
            count++;

        }
        // cout << freq[i] << " ";
    }
    cout << abs(count) << "\n";

    return 0;
}