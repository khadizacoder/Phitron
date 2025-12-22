#include <stdio.h>

void fun(int x)
{
    x = 20;

    printf("fun function = %p \n", &x);
}

int main ()
{
    int x = 10;

    fun(x);

    printf("main function = %p\n", &x);

    return 0;
}