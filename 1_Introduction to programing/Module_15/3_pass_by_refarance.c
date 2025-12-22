#include <stdio.h>

void fun(int *ptr)
{
    *ptr = 30;
    // printf("fun function = %p \n", &ptr);
}

int main ()
{
    int x = 10;

    fun(&x);

    printf("main function value = %d\n", x);
    // printf("main function = %p \n", &x);
    return 0;
}