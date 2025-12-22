#include <stdio.h>

int sum(int num1, int num2)
{
    // printf("%d %d\n", num1, num2);
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = sum(a, b);
    printf("%d", ans);
    return 0;
}