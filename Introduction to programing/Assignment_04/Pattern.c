#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int has = 0;
    int has2 = (2 * n) - 1;
    int space = n - 1;
    // char symbol1[] = {'#', '-'};

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = 0; j <= has; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j <= has; j++)
            {
                printf("-");
            }
        }

        printf("\n");
        has += 2;
        space--;
    }

    has -= 4;
    space = 1;
    char symbol2[] = {'-', '#'};

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= has; j++)
        {
            printf("%c", symbol2[i % 2]);
        }

        printf("\n");
        has -= 2;
        space++;
    }

    return 0;
}
