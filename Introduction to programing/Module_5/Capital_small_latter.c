// #include <stdio.h>
// int main ()
// {
//     char x;
//     scanf("%c", &x);
//     if(x >= 'a' || x >= 'A' && x <= 'z' || x <= 'Z'){
//         if (x >= 'a' && x <= 'z')
//         {
//             printf("ALPHA\n");
//             printf("IS SMALL");
//         }
//         else if(x >= 'A' && x <= 'Z')
//         {
//             printf("ALPHA\n");
//             printf("IS CAPITAL");
//         }
//         else{
//             printf("IS DIGIT");
//         }
//     }
//     return 0;
// }

// different way

#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n >= '0' && n <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (n >= 'a' && n <= 'z')
        {
           printf("IS SMALL");
        }
        else if (n >= 'A' && n <= 'Z')
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}