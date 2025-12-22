#include <stdio.h>
int main()
{
    int n;
    int m = 4;
    scanf("%d", &n);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
        for (int j = 1; j < m; j++)
        {
            a[i] *= arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        float res = arr[i][0] / (float) a[i];
        float val = res - (int)res;

        if(val > 0.000001 || val < -0.000001)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n", (int)res);
        }
        
    }

    return 0;
}