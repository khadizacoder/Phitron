#include <stdio.h>
int main ()
{
    char s[100001];
    scanf("%s", &s);

    int sLen = strlen(s);

    for(int i = 0; i < sLen; i++)
    {

        if(s[i] >= 'a'){
            printf("%c", s[i] - 32);
        }

        if(s[i] >= 'A' && s[i] < 'a')
        {
            printf("%c", s[i] + 32);
        }
        

        if (s[i] == ',')
        {
            s[i] = ' ';
            printf("%c", s[i]);
        }
    }

    return 0;
}