#include <stdio.h>

int factorial();

int main()
{
    int f;

    printf("Enter a value: ");
    scanf("%d", &f);

    printf("Factorial of %d is %d", f, factorial(f));

    return 0;
}
int factorial(int i)
{
    if (i == 0)
    {
        return 1;
    }

    return i * factorial(i - 1);
}
