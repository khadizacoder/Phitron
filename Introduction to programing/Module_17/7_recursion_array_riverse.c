#include <stdio.h>
void arry_riverse(int arr[], int i, int sz)
{
    if(i == sz){
        return;
    }
    arry_riverse(arr, i + 1, sz);
    printf("%d\n", arr[i]);
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
    arry_riverse(arr, 0, sz);
    return 0;
}