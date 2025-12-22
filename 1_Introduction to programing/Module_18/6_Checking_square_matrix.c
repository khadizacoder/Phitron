#include <stdio.h>
int main ()
{
    int r, c;
    scanf("%d %d", &r, &c);

    if(r == c)
    {
        printf("This is a square matrix");
    }
    else{
        printf("This is not a square matrix");
    }
    return 0;
}