// #include <stdio.h>
// int main ()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     printf("%d", arr[2]);
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int a[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}