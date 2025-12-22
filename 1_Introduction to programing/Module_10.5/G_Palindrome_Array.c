#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int copy[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
    }

    int i = 0, j = n-1;
    while (i < j)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++; j--;
    }

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
       if (arr[i] != copy[i])
       {
            flag = 0;
       }
    }
    
    if (flag == 1)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}