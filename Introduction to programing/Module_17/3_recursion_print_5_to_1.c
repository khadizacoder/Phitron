/*
#include <stdio.h>
void printing(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("%d\n", n);
    printing(n - 1);
}
int main ()
{
    int n = 5;
    printing(n);
    return 0;
}
*/

//* mult reverse print

#include <stdio.h>
void printing(int n)
{
    if(n == 6)
    {
        return;
    }
    printing(n + 1);
    printf("%d\n", n);
}
int main ()
{
    int n = 1;
    printing(n);
    return 0;
}