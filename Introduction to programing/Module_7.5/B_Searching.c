#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == a[i])
        {
            printf("%d ", i);
            return 0;
        }
    }
    printf("-1");
    
    return 0;
}