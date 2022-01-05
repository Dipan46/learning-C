#include <stdio.h>
int main()
{
    float a, p, r, t, i;
    printf("Enter The Amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time: ");
    scanf("%f", &t);
    // Calculation
    a = (p * r * t) / 100.0;
    i = p + a;
    printf("Interest is: %.3f", a);
    printf("\nTotal amount is: %.3f", i);
    return 0;
}