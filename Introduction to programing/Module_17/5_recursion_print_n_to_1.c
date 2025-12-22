#include <stdio.h>
void printing(int size)
{
    if(size == 0) return;
    printf("%d\n", size);
    printing(size - 1);
}
int main ()
{
    int size;
    scanf("%d", &size);
    printing(size);
    return 0;
}

//* different way

/*
#include <stdio.h>
void printing(int i, int size)
{
    if(i > size) return;
    printing(i + 1, size);
    printf("%d\n", i);
}
int main ()
{
    int size;
    scanf("%d", &size);
    printing(1, size);
    return 0;
}
*/