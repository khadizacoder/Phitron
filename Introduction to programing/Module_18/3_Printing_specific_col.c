#include <stdio.h>
int main ()
{
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int spc_col;
    scanf("%d", &spc_col);

    /*
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(j == 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    */

    //? Simple way
    for(int i = 0; i < c; i++)
    {
        printf("%d\n", arr[i][spc_col]);
    }

    return 0;
}