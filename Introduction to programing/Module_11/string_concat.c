/*
#include <stdio.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    for(int i = 0; i <= len_b; i++)
    {
        a[i + len_a] = b[i];
    }

    printf("%s %s", a, b);
    return 0;
}
*/

//* string concat with => strcat();

#include <stdio.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    strcat(a, b);

    printf("%s %s", a, b);

    return 0;
}