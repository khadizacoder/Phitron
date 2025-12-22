#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main ()
{
    int a =6, b=5;

    swap(&a, &b);

    printf("%d %d", a, b);
    
    return 0;
}