#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int spc_row;
    scanf("%d", &spc_row);

    for (int i = 0; i < r; i++)
    {
        if (i == spc_row)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    /*
    * simple way
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[spc_row][i]);
    }
    */
    return 0;
}