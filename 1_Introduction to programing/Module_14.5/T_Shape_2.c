#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int str = 0;
    int space = n - 1;
    for(int i = 0; i < n; i++)
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
        str +=2 ;
        space--;
    }
    return 0;
}