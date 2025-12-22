/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    int copy[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        copy[i] = a[i];
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++; j--;
    }

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != copy[i])
        {
            flag = 0;
        }
        //  printf("%d ", a[i]);
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    int copy[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;

        i++; j--;
    }
    
    int flug = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != copy[i])
        {
            flug = 0;
        }
        
    }

    if (flug == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}