#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int p_matrix = 0;
    int s_matrix = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                p_matrix+=arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i + j == n -1)
            {
                s_matrix+=arr[i][j];
            }
        }
    }

    int res = p_matrix - s_matrix;
    if(res < 0)
    {
        printf("%d", res * -1);
    }
    else{
        printf("%d", res);
    }
    
    return 0;
}