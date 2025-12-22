#include <stdio.h>

void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    int last = n % 10;
    rec(n / 10);
    printf("%d ", last);
}

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        int n;
        scanf("%d", &n);

        if(n == 0)
        {
            printf("0");
        }
        rec(n);
        printf("\n");
    }

    return 0;
}