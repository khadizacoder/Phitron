#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char str[10001];
        scanf("%s", &str);

        int length = strlen(str);
        int num = 0;
        int cap = 0;
        int small = 0;

        for (int i = 0; i < length; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                cap++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                small++;
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                num++;
            }
        }
        
        printf("%d %d %d\n", cap, small, num);
    }

    return 0;
}