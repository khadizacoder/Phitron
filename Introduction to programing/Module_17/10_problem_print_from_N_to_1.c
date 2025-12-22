#include <stdio.h>
void printing(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    if(n != 1) printf(" ");
    printing(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printing(n);
    return 0;
}