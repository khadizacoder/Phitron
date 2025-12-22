#include <stdio.h>
void array_print(int arr[], int i, int sz)
{
    if(i == sz) return;
    printf("%d\n", arr[i]);
    array_print(arr, i + 1, sz);
}

int main ()
{
    int sz;
    scanf("%d", &sz);

    int arr[sz];
    for(int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    array_print(arr,0,sz);
    return 0;
}