#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", &str);

    int length = strlen(str);

    int i = 0, j = length - 1;
    int flag = 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
        }
        i++; j--;
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}