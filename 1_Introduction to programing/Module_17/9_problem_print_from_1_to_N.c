#include <stdio.h>
void print_num(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    print_num(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_num(1, n);
    return 0;
}