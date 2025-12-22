#include <stdio.h>
int main()
{
    for (size_t j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}