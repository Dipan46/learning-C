#include <stdio.h>

int main()
{
    int a = -1, b = 1, c, i;

    printf("enter a value= ");
    scanf("%d", &i);

    while (c < i)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
