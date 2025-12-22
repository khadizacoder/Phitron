#include <stdio.h>
int main ()
{
    int r, c;
    scanf("%d %d", &r, &c);

    if(r == 1)
    {
        printf("This is a row matrix");
    }
    else{
        printf("This is not a row matrix");
    }
    return 0;
}