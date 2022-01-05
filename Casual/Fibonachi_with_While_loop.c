#include <stdio.h>

int main()
{
    int a = -1, b = 1, c, i;

    printf("enter a value= ");
    scanf("%d", &i);
    // Multiplying previous 2 numbers to get nest number with while loop
    while (c < i)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
