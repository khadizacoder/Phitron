#include <stdio.h>
int main ()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    int res = strcmp(a, b);

    // printf("%d", res);

    if (res < 0)
    {
        printf("%s", a);
    }
    else if (res == 0)
    {
        printf("%s", a);
    }
    else if (res > 0)
    {
        printf("%s", b);
    }

    return 0;
}