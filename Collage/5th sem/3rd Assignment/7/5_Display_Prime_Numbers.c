#include <stdio.h>
int prime(int);
int main()
{
    int s, f, l;

    printf("Enter starting point: ");
    scanf("%d", &s);
    printf("Enter ending point: ");
    scanf("%d", &f);

    printf("Prime numbers are: ");
    for (int i = s; i <= f; i++)
    {
        l = prime(i);
        if (l != 1)
            printf("%d ", i);
    }
    return 0;
}
int prime(int n)
{
    for (int j = 2; j <= (n / 2); j++)
        if (n % j == 0)
            return 1;
    return 0;
}
