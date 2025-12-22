#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int str = 1;
    int space = n-1;

    for (int i = n; i > 0; i--)
    {
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = str; j > 0; j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
        str++;
        space--;
    }
    
    return 0;
}

