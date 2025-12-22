#include <stdio.h>
void mello()
{
    printf("Mello\n");
}
void gello()
{
    printf("Gello\n");
    mello();
    printf("Ami Gello");
}
void hello()
{
    printf("Hello\n");
    gello();
}
int main ()
{
    printf("hi\n");
    hello();
    return 0;
}