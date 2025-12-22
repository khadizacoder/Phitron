#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] <= 10)
        {
            /* code */
            printf("A[%d] = %d \n", i, a[i]);
        }
        
    }
    
    return 0;
}