#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m;
        scanf("%lld", &m);

        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long int mult = a * b * c;

        double res = m / (double) mult;

        if (res - (long long int)res > 0.0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", (long long int)res);
        }
        // printf("%f\n", res);
    }

    return 0;
}