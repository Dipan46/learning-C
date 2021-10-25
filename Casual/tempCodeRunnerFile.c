#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, x;
    scanf("%d\n%d", &a, &b);
    for (x = a; x <= b; x++)
    {
        if (x == 1)
            printf("one\n");
        else if (x == 2)
            printf("two\n");
        else if (x == 3)
            printf("three\n");
        else if (x == 4)
            printf("four\n");
        else if (x == 5)
            printf("five\n");
        else if (x == 6)
            printf("six\n");
        else if (x == 7)
            printf("seven\n");
        else if (x == 8)
            printf("eight\n");
        else if (x == 8)
            printf("eight\n");
        else if (x == 9)
            printf("nine\n");
        else if(x >= 10)
            for (x = 10; x <= b; x++)
                if (x % 2 == 0)
                    printf("even\n");
                else
                    printf("odd\n");
    }
    return 0;
}
