#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int fqarr[10] = {0};

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            fqarr[0]++;
        }
        if (arr[i] == 1)
        {
            fqarr[1]++;
        }
        if (arr[i] == 2)
        {
            fqarr[2]++;
        }
        if (arr[i] == 3)
        {
            fqarr[3]++;
        }
        if (arr[i] == 4)
        {
            fqarr[4]++;
        }
        if (arr[i] == 5)
        {
            fqarr[5]++;
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("%d => %d \n",i, fqarr[i]);
    }

    return 0;
}