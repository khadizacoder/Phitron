#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int max = 0;
    int min = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            max += a[i];
        }
        
        if (a[i] < 0)
        {
            min += a[i];
        }
    }
    printf("%d ", max);
    printf("%d", min);
    
    return 0;
}