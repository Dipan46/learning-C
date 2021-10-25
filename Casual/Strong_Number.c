#include <stdio.h>

int main()
{
    int n, fact = 1, b, q, rem, result = 0;

    printf("Enter: ");
    scanf("%d", &n);

    q = n;
    while (q != 0)
    {
        rem = q % 10;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }

    if (result == n)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}
