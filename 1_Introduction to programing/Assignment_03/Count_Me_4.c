#include <stdio.h>
int main()
{
    char str[10001];
    scanf("%s", str);

    int len = strlen(str);
    int fre_arr[26] = {0};

    for (int i = 0; i < len; i++)
    {
        int ind = str[i] - 'a';
        fre_arr[ind]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre_arr[i] > 0)
        {
            printf("%c - %d\n", i + 'a', fre_arr[i]);
        }
    }

    return 0;
}