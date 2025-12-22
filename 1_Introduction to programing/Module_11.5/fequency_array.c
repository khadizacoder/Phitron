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

    int feq_arr[9] = {0};

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        feq_arr[val]++;
    }

    for (int i = 0; i < 9; i++)
    {
        if (feq_arr[i] > 0)
        {
            printf("%d => %d \n",i, feq_arr[i]);
        }
    }

    return 0;
}