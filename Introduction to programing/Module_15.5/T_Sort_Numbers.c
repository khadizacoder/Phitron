#include <stdio.h>
void sort_num(int a, int b, int c)
{
    int max = a, mid = b, min = c;

    // max
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    // min
    if (a < min)
    {
        min = a;
    }
    if (b < min)
    {
        min = b;
    }

    // mid

    mid = a + b + c - (max + min);

    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d", a, b, c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort_num(a, b, c);

    return 0;
}