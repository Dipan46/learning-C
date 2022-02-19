#include <stdio.h>
int armstrong(int);
int prime(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (armstrong(n) == 0 && prime(n) == 0)
        printf("Input is both Armstrong and Prime Number");
    else if (armstrong(n) == 0)
        printf("Input is an Armstrong Number");
    else if (prime(n) == 0)
        printf("Input is a Prime Number");
    else
        printf("input is none of Armstrong or Prime Number");
    return 0;
}
int prime(int a)
{
    for (int i = 2; i <= (a / 2); i++)
        if (a % i == 0)
        {
            return 1;
            break;
        }
    return 0;
}
int armstrong(int b)
{
    int a = b, l, r = 0;
    while (b != 0)
    {
        l = b % 10;
        r = r + (l * l * l);
        b = b / 10;
    }
    if (a == r)
        return 0;
    else
        return 1;
}
