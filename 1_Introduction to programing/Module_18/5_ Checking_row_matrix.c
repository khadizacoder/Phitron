#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    if (c == 1)
    {
        printf("This is a col matrix");
    }
    else{
        printf("This is not a col matrix");
    }
    return 0;
}