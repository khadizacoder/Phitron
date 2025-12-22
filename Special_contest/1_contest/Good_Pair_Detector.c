#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] % 2 == 0 && a[j] % 2 != 0) || (a[i] % 2 != 0 && a[j] % 2 == 0))
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}

