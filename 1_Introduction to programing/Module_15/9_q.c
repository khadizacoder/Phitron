#include <stdio.h>
void m(int p, int q)
{
    int tmp = p;
    p = q;
    q = tmp;
}
int main ()
{
    int a = 6, b =5;

    m(a, b);

    printf("%d %d", a, b);
    return 0;
}