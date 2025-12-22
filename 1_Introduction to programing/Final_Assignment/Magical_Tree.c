#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int res = n / 2;

    int str = 0;
    int line = 6 + res;
    int space = line - 1;

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for(int j = 0; j <= str; j++)
        {
            printf("*");
        }
        printf("\n");
        str+=2;
        space--;
    }

    int space_2 = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
        str++;
        space_2++;
    }
    return 0;
}