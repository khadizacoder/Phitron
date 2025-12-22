#include <stdio.h>

void sum(int *num1, int *num2)
{
    int sum = *num1 + *num2;
    printf("%d", sum);
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    sum(&num1, &num2);
}