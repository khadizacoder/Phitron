#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int cnt5 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else if (arr[i] == 2)
        {
            cnt2++;
        }
        else if (arr[i] == 3)
        {
            cnt3++;
        }
        else if (arr[i] == 4)
        {
            cnt4++;
        }
        else if (arr[i] == 5)
        {
            cnt5++;
        }
        
    }
    
    printf("%d => %d \n", 0, cnt0);
    printf("%d => %d \n", 1, cnt1);
    printf("%d => %d \n", 2, cnt2);
    printf("%d => %d \n", 3, cnt3);
    printf("%d => %d \n", 4, cnt4);
    printf("%d => %d \n", 5, cnt5);

    return 0;
}