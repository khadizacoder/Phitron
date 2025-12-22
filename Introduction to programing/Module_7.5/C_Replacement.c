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
        // if (a[i] == 0)
        // {
        //     /* code */
        //     printf("0 ");
        // }
        
        if (a[i] < 0)
        {
            /* code */
            printf("2 ");
        }
        else if (a[i] > 0){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
    
    return 0;
}