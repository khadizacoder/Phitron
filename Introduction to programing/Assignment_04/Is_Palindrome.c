#include <stdio.h>
int is_palindrome(char *str)
{
    int len = strlen(str);

    int i = 0, j = len - 1;
    int flag = 1;

    for (int k = 0; k <= len; k++)
    {
        if (str[i] != str[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }
    return flag;
}
int main()
{
    char str[1005];
    scanf("%s", str);

    int res = is_palindrome(&str);

    if(res == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}