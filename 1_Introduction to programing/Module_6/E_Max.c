#include <stdio.h>
int main ()
{
    int n;
    int x;
    int max = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        // printf("%d \n", x);
        if(x > max){
            max = x;
        }
    }
    printf("%d ", max);
    return 0;
}