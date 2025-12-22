#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[101];
        scanf("%s", &str);

        int length = strlen(str);

        if (length <= 10)
        {
            printf("%s\n", str);
        }else {
            int desit = length - 2;
            printf("%c%d%c\n", str[0], desit, str[length -1]);
        }        
    }

    return 0;
}