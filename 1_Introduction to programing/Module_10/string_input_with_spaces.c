#include <stdio.h>
int main ()
{
    char s[50];
    // scanf("%s", &s);

    // spach soho print
    // gets(s);

    // better way spach soho print hoi but enter o print hoi
    fgets(s, 50, stdin);

    printf("%s", s);
    return 0;
}