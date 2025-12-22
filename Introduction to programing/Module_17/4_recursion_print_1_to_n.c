#include <stdio.h>
void printing(int i, int n)
{
    if(i > n)
    {
        return;
    }
    printf("%d\n", i);
    printing(i + 1, n);
}
int main ()
{
    int n;
    scanf("%d", &n);

    printing(1, n);
    return 0;
}