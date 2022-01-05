#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("Enter any number: ");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 10;
        c = c + b * b * b;
        a = a / 10;
    }
    if (c = a)
        printf("Input is an Armstrong Number");
    else
        printf("Input is not an Armstrong Number");
    return 0;
}
