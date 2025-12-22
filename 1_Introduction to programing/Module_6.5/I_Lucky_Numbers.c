#include <stdio.h>
int main ()
{
    int x;
    scanf("%d", &x);
    int first = x/10;
    int last = x%10;
    if (last  % first == 0 || first % last == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}