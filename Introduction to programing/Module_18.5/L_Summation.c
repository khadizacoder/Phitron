#include <stdio.h>
long long int sum(long long int arr[], long long int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + sum(arr, n - 1);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    printf("%lld", sum(arr, n));

    return 0;
}
