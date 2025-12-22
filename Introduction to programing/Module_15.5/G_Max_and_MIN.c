#include <stdio.h>

void min_max(int ary[], int size)
{
    int max = ary[0];
    int min = ary[0];
    for (int i = 0; i < size; i++)
    {
        if (max < ary[i])
        {
            max = ary[i];
        }
        if (min > ary[i])
        {
            min = ary[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int size;
    scanf("%d", &size);

    int ary[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ary[i]);
    }

    min_max(ary, size);

    return 0;
}