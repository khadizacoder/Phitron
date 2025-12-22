#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int str = n;
    int space = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= str; j++)
        {
            printf("* ");
        }
        
        printf("\n");
        str--;
        space++;
    }
    return 0;
}