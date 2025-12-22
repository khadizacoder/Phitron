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

    int x;
    scanf("%d", &x);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int res = arr[i] + arr[j];
            if(res == x)
            {
                flag = 1;
                printf("Yes\n");
            }
        }
    }

    if (flag == 0)
    {
        printf("No");
    }

    return 0;
}