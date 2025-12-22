// string choto boro khuja bar kora

/*
#include <stdio.h>
#include <stdbool.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i = 0;
    while (true)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else if (a[i] > b[i])
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
    }
    
    return 0;
}
*/


//* string compair with => strcmp();

#include <stdio.h>
int main ()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int res = strcmp(a, b);

    printf("%d", res);

    // if (res < 0)
    // {
    //     printf("A is smaller");
    // }
    // else if (res == 0)
    // {
    //     printf("Equal");
    // }
    // else if (res > 0)
    // {
    //     printf("B is smaller");
    // }
    
    return 0;
}