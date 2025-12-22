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

        string s;
        cin >> s;

        int fre_ary[26] = {0};
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            int idx = s[i] - 65;

            if (fre_ary[idx] == 0)
            {
                total += 2;
                fre_ary[idx] += 2;
            }
            else
            {
                total += 1;
            }
        }
        cout << total << endl;
    }

    return 0;
}