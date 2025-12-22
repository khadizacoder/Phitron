#include <stdio.h>
int count_before_one(int ary[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {

        if (ary[i] == 1)
        {
            break;
        }
        else{
            // printf("%d = %d\n", i, ary[i]);
            flag++;
        }
    }

    return flag;
}
int main()
{
    int n;
    scanf("%d", &n);

    int ary[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ary[i]);
    }

    int res = count_before_one(ary, n);

    printf("%d ", res);

    return 0;
}