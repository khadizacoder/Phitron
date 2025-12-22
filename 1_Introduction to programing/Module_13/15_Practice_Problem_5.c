#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    char ch = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= ch; j++)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
        ch++;
    }

    return 0;
}