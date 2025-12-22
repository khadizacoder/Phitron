#include <stdio.h>
int main ()
{
    char s[1001];
    char t[1001];
    scanf("%s %s", &s, &t);

    int sLen = strlen(s);
    int tLen = strlen(t);

    printf("%d %d\n", sLen, tLen);
    printf("%s %s", s, t);
    return 0;
}