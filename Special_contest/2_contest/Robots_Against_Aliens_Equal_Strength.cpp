#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int k = 2;

    long long total_max = -1e18;
    long long total_min = 1e18; 

    for (int i = 0; i < n; i++)
    {
        long long int zero = 0;
        long long int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                zero++;
            }
            else
            {
                sum += x;
            }
        }

        long long row_min = sum - zero * k;
        long long row_max = sum + zero * k;

        if (row_min > total_max)
            total_max = row_min; 
        if (row_max < total_min)
            total_min = row_max;  
    }
    if (total_max <= total_min)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
