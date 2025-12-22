// #include <stdio.h>
// int main ()
// {
//     int a = 10;
//     printf("%d", a*3);
//     return 0;
// }

#include <stdio.h>
int main ()
{
    for(int i = 2; i <= 100; i*=2){
        printf("%d\n", i);
    }
    
    printf("\nDicrement\n\n");
    
    for(int i = 10; i >= 1; i--){
        printf("%d\n", i);
    }
    return 0;
}