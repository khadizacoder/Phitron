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
        string st;
        cin >> st;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int length = j - i + 1;
                if (length % 2 == 0) continue;

                bool x = true;

                for (int k = i; k <= j; k++)
                {
                    if ((j-k) % 2 == 0)

                    {
                        if (st[k] != 'u' && st[k] != 'o')
                        {
                            x = false;
                            break;
                        }
                    }
                    else
                    {
                        if (st[k] != 'w')

                        {
                            x = false;
                            break;
                        }
                    }
                }
                if (x)
                    ans = max(ans, length);
            }
        }
        cout << ans << endl;
    }
    return 0;
}