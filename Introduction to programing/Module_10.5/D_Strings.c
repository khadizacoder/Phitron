#include <stdio.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    printf("%d %d\n", len_a, len_b);
    printf("%s%s", a, b);

    printf("\n");
    char ind_a = a[0];
    char ind_b = b[0];

    printf("%c", ind_b);

    for (int i = 1; i < len_a; i++)
    {
        printf("%c", a[i]);
    }

    printf(" ");
    printf("%c", ind_a);
    
    for (int i = 1; i < len_b; i++)
    {
        printf("%c", b[i]);
    }

    return 0;
}