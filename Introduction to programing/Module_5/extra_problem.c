// Simple Calculator
/* 
#include <stdio.h>
int main ()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int summation = a + b;
    long long int multiplication = a * b;
    long long int subtraction = a - b;
    printf("%lld + %lld = %lld\n", a, b, summation);
    printf("%lld * %lld = %lld\n", a, b, multiplication);
    printf("%lld - %lld = %lld", a, b, subtraction);
    return 0;
}
*/

#include <stdio.h>
int main ()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int first_multi = a * b;
    long long int second_munli = c * d;
    long long int subtraction = first_multi - second_munli;
    printf("Difference = %lld", subtraction);

    return 0;
}