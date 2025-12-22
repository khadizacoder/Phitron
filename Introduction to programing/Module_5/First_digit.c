
// #include <stdio.h>
// int main ()
// {
//     char n;
//     scanf("%c", &n);
//     if(n%2 == 0){
//         printf("EVEN");
//     }else{
//         printf("ODD");
//     }
//     return 0;
// }

//  different way first 1 number print

// #include <stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int first_digit = n/1000;
//     // printf("%d", first_digit);
//     if (first_digit % 2 == 0)
//     {
//        printf("EVEN");
//     }else{
//         printf("ODD");
//     }
//     return 0;
// }

// last 1 number print

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int last_num = n%10;
    printf("%d", last_num);
    return 0;
}