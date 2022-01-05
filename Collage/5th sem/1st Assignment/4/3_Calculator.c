#include <stdio.h>
int main()
{
    char c;
    float a, b, r;
    printf("Enter the operation you want to perform: ");
    scanf("%c", &c);
    printf("Enter the 1st number: ");
    scanf("%f", &a);
    printf("Enter the 2nd number: ");
    scanf("%f", &b);
    switch (c)
    {
    case '+':
        r = a + b;
        printf("Sum is = %d", (int)r);
        break;

    case '-':
        r = a - b;
        printf("Difference is = %d", (int)r);
        break;

    case '*':
        r = a * b;
        printf("Product is = %d", (int)r);
        break;

    case '/':
        r = a / b;
        printf("Quotient is = %.3f", r);
        break;

    case '%':
        r = (int)a % (int)b;
        printf("Reminder is = %d", (int)r);
        break;
    }
    return 0;
}