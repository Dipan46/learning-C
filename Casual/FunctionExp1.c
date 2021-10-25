#include <stdio.h>

int multiplication(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b, c;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the secend value: ");
    scanf("%d", &b);

    c = multiplication(a, b);

    printf("Ans: %d", c);

    return 0;
}
