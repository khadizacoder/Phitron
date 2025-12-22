#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int x;
    int v = 0;
    scanf("%d %d", &x, &v);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == x)
        {
            printf("%d ", v);
            // printf("%d\n", a[i]);
        }
        else if(i != x){
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}