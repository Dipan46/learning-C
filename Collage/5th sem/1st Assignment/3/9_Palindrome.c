#include <stdio.h>
int main()
{
    int a, b, i, r = 0;
    printf("Enter any number: ");
    scanf("%d", &a);
    i = a;
    // Loop to reverse
    while (i != 0)
    {
        b = i % 10;
        r = (r * 10) + b;
        i = i / 10;
    }
    printf("%d\n", r);
    if (a == r)
        printf("Input is a palindrome");
    else
        printf("Input is not a palindrome");
    return 0;
}
