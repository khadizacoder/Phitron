#include <stdio.h>

void fun(int str[])
{
    printf("%s\n", str);

    int len = strlen(str);
    printf("%d \n", len);
}

int main ()
{
    char str[10];
    scanf("%s", str);

    fun(str);

    return 0;
}