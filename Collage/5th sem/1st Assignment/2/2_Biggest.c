#include <stdio.h>

int main()
{
    int a, b, c;
    // input
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    // logic + output
    if (a > b && a > c && a != b && a != c)
        printf("Between %d, %d, %d the bigest number is %d", a, b, c, a);
    else if (b > a && b > c && b != a && b != c)
        printf("Between %d, %d, %d the bigest number is %d", a, b, c, b);
    else if (c > a && c > a && c != a && c != b)
        printf("Between %d, %d, %d the bigest number is %d", a, b, c, c);
    else if (a == b && a != c)
        printf("%d and %d both are bigger same", a, b);
    else if (a == c && a != b)
        printf("%d and %d both are bigger same", a, c);
    else if (b == c && b != a)
        printf("%d and %d both are bigger same", b, c);
    else
        printf("All are equal");
    return 0;
}
