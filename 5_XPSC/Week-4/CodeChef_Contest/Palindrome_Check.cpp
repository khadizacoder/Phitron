#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = true;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] == a[j])
            {
                i++;
                j--;
            }
            else if (a[i] == k)
            {
                i++;
            }
            else if (a[j] == k)
            {
                j--;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}