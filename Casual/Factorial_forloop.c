#include <stdio.h>

int main()
{
    int n, c, f = 1;

    printf("Enter a value: ");
    scanf("%d", &n);

    for (c = 1; c <= n; c++)
    {
        f = f * c;
    }
    printf("The factorial of %d is %d", n, f);

    return 0;
}
