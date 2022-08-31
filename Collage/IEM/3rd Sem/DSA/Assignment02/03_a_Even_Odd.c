#include <stdio.h>
int main()
{
    int number, rem;
    printf("Enter the number: ");
    scanf("%d", &number);
    rem = number % 2;

    switch (rem)
    {
    case 0:
        printf("Even");
        break;
    default:
        printf("Odd");
        break;
    }
    return 0;
}