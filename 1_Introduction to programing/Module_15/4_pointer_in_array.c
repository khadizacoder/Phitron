#include <stdio.h>


int main ()
{
    int a[5] = {10, 20, 30, 40, 50};

    *(a+3) = 400;

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%p\n", &a[i]);
    // }

    printf("%d\n", a[0]);
    printf("%p\n", &a[0]);

    return 0;
}