/*
#include <stdio.h>
int main ()
{
    char str[20] = "HelloW\0orld";
    printf("%s", str);
    return 0;
}
*/

#include <stdio.h>
int main ()
{
    char str[20];
    scanf("%c", &str);
    printf("%s", str);
    return 0;
}