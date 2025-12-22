// #include <stdio.h>
// int main ()
// {
//     char s1[1001], s2[1001];
//     scanf("%s %s", &s1, &s2);

//     printf("%s", s1);

//     int first, second;
//     scanf("%d %d", &first, &second);

//     for (int i = first; i <= second; i++)
//     {
//         printf("%c", s2[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char s1[2001], s2[1001];
    scanf("%s %s", &s1, &s2);

    int start, end;
    scanf("%d %d", &start, &end);

    int len_s1 = strlen(s1);

    for(int i = start; i <= end; i++) {
        s1[len_s1++] = s2[i]; 
    }
    s1[len_s1] = '\0';

    printf("%s", s1);

    return 0;
}