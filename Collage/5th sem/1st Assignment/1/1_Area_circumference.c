#include <stdio.h>
int main()
{
    float a, c, r;
    // Input
    printf("Enter the radius: ");
    scanf("%f", &r);
    // Calculation
    a = (22.0 / 7.0) * r * r;
    c = 2 * r * (22.0 / 7.0);
    // Output
    printf("Area: %.3f\nCircumference: %.3f", a, c);
    return 0;
}
