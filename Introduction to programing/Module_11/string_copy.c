/*
#include <stdio.h>
#include <string.h>
int main ()
{
    char str_a[101];
    char str_b[101];
    scanf("%s %s", &str_a, &str_b);

    int length = strlen(str_b);
    for(int i = 0; i <= length; i++)
    {
        str_a[i] = str_b[i];
    }

    printf("%s %s", str_a, str_b);
    return 0;
}
*/

/*
#include <stdio.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int length = strlen(b);

    for(int i = 0; i <= length; i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a, b);

    return 0;
}
*/

//* String copy with => strcpy();

#include <stdio.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    strcpy(a, b);

    printf("%s %s", a, b);
    return 0;
}