
// #include <stdio.h>
// int main ()
// {
//     char B = 66; // ASCI TABLE
//     printf("%d \n", B);

//     int n = 66;
//     printf("%c", n);
//     return 0;
// }

// problem 

#include <stdio.h>
int main ()
{
    char x;
    scanf("%c", &x);
    if(x >= 'a' && x <= 'z'){
        x = x - 32;
        printf("%c", x);
    }else {
        x = x + 32;
        printf("%c", x);
    }
    return 0;
}