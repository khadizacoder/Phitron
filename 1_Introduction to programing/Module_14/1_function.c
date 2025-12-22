#include <stdio.h>

int mult(int num)
{
    int ans = num * 2;
    return ans;
}

int main ()
{
    int x = 170;
    int ans = mult(x);
    printf("%d", ans);
    return 0;
}