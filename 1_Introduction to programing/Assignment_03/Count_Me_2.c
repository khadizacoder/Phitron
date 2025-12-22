#include <stdio.h>
int main()
{
    char str[100001];
    scanf("%s", &str);

    int length = strlen(str);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}