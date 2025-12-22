#include <stdio.h>
#include <string.h>
int main ()
{
    int n = 1001;
    char str[n];

    scanf("%s", &str);

    int length = strlen(str);

    int i = 0, j = length - 1;
    int flag = 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++; j--;
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}