#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("enter the 2nd number:");
    scanf("%d", &b);
    if (a < b)
    {
        c = a / 2;
        if (b % c == 0)
            printf("GCD is: %d", c);
        else
            printf("GCD is: 1");
    }
    else if (b < a)
    {
        c = b / 2;
        if (a % c == 0)
            printf("GCD is: %d", c);
        else
            printf("GCD is: 1");
    }
    return 0;
}