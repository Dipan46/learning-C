#include <stdio.h>

int input()
{
    int a, b, c;
    printf("Enter the amount: ");
    scanf("%d", &a);

    printf("Enter the quantity: ");
    scanf("%d", &b);

    c = a * b;
    return c;
}

int main()
{
    int a, t = input();

    printf("Total: %d\n", t);

    if (t >= 1000)
    {
        a = t - ((t * 10) / 100);
        printf("Total after applying 10 percent off: %d\n", a);
    }
    else if (t >= 500)
    {
        a = t - ((t * 5) / 100);
        printf("Total after applying 5 percent off: %d\n", a);
    }
    return 0;
}
