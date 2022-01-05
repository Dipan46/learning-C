#include <stdio.h>

int main()
{
    float a, b;
    // input
    printf("Enter the 1st number: ");
    scanf("%f", &a);
    printf("Enter the 2nd number: ");
    scanf("%f", &b);
    // Condition + Output
    if (a > b)
        printf("Between %.3f, %.3f the bigest number is %.3f", a, b, a);
    else if (b > a)
        printf("Between %.3f, %.3f the bigest number is %.3f", a, b, b);
    else
        printf("Both are equal");
    return 0;
}
