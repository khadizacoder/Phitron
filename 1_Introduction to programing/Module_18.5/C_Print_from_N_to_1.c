#include <stdio.h>
int pri(int n)
{
    if(n == 0) return;
    printf("%d", n);
    if(n != 1)
    {
        printf(" ");
    }
    pri(n - 1);
}
int main ()
{
    int n;
    scanf("%d", &n);
    pri(n);
    return 0;
}