#include <stdio.h>
void odd_even()
{
    int n;
    scanf("%d", &n);

    int ary[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++)
    {
        if(ary[i] % 2 == 0)
        {
            odd++;
        }
        else{
            even++;
        }
    }
    printf("%d %d", odd, even);
}
int main ()
{
    odd_even();
    return 0;
}