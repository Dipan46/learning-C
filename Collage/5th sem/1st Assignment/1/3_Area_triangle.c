#include <stdio.h>
int main()
{
    float a, h, b;
    printf("Enter the hight: ");
    scanf("%f", &h);
    printf("Enter the base: ");
    scanf("%f", &b);
    // Calculation
    a = 0.5 * h * b;
    printf("%.3f", a);
    return 0;
}
