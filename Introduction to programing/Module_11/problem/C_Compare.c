/*
*Given two strings X and Y . Print the smallest lexicographical one.
*Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.
*/

#include <stdio.h>
int main ()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int i = 0;

    int first = 0;
    int second = 0;
    int equal = 0;

    while (i < a)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            equal = 1;
            break;
        }
        else if (a[i] == '\0')
        {
            first = 1;
            break;
        }
        else if (b[i] == '\0')
        {
            second = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            first = 1;
            break;
        }
        else if (a[i] > b[i])
        {
            second = 1;
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
        
    }
    
    if (equal == 1)
    {
        printf("%s", a);
    }
    else if (first == 1)
    {
        printf("%s", a);
    }
    else if (second == 1)
    {
        printf("%s", b);
    }
    
    return 0;
}