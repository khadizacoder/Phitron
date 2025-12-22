#include <stdio.h>
int pri(int n)
{
    if(n == 0) return;
    pri(n - 1);
    printf("%d\n", n);
}
int main ()
{
    int n;
    scanf("%d", &n);
    pri(n);
    return 0;
}