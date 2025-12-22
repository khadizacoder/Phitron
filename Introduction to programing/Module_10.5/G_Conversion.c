#include <stdio.h>
int main()
{
    char str[100005];
    scanf("%s", &str);

    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", str[i] + 32);
        }
        if(str[i] == ','){
            printf(" ");
        }
    }

    return 0;
}