#include <stdio.h>
int main ()
{
    int x = 10; // Declare and initialize
    // int a[5] = {10, 20, 30, 40, 50}; // Declare and initialize
    int a[] = {10, 20, 30, 40, 50}; // [] ar vitor size na dela o dhore neta pare

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}