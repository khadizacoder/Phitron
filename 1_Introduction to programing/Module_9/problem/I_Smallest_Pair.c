/*
#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int res = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = a[i] + a[j] + j - i;
                if (val < res)
                {
                    res = val;
                }
            }
        }

        printf("%d\n", res);
    }
    return 0;
}
*/

#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n + 1];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int res = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                if (val < res)
                {
                    res = val;
                }
                
            }
        }

        printf("%d", res);
    }

    return 0;
}