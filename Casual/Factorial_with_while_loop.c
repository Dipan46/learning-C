#include <stdio.h>

int main()
{
    int n, a = 1, b = 1;

    printf("Enter: ");
    scanf("%d", &n);

    while (b <= n)
    {
        a = a * b;
        b++;
    }

    printf("Factorial is: %d", a);

    return 0;
}
