#include <stdio.h>
void even_print(int arr[], int sz, int i)
{
    if(i == sz) return;
    even_print(arr, sz, i + 1);
    if(i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
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

    even_print(arr, sz, 0);

    return 0;
}