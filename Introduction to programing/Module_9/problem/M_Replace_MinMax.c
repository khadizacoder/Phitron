/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = 0;
    int min = a[0];
    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxIdx = i;
        }

        if (min > a[i])
        {
            min = a[i];
            minIdx = i;
        }
    }

    a[maxIdx] = min;
    a[minIdx] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
*/

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = 0;
    int min = a[0];
    int maxIdx = 0, minIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            maxIdx = i;
        }
        if (min > a[i])
        {
            min = a[i];
            minIdx = i;
        }
    }
    
    a[maxIdx] = min;
    a[minIdx] = max;

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}