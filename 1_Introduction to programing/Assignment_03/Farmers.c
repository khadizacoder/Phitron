#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        if (m2 > 0)
        {
            int frm = d * m1;
            int total_frm = m1+m2;
            int res = frm / total_frm;
            int day = d - res;
            printf("%d\n", day);
        }
        else{
            printf("0\n");
        }

    }
    
    return 0;
}