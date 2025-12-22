#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        int i = 0, j = n - 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0 + i; j < n; j++)
            {
                if(b[i] > a[j])
                {
                    int tmp = b[i];
                    b[i] = b[j];
                    b[j] = tmp;
                }
            }
        }

        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (c[i] < 0)
            {
                printf("%d ", c[i] * -1);
            }
            else
            {
                printf("%d ", c[i]);
            }
        }
        printf("\n");
    }

    return 0;
}