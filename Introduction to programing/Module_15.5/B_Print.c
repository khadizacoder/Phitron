#include <stdio.h>

void p(int num)
{
    for(int i = 1; i <= num; i++)
    {
        printf("%d", i);
        if(i < num){
            printf(" ");
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    p(num);
}