#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter temperature in C: ");
    scanf("%f", &c);
    // calculation
    f = ((c * 9.0) / 5.0) + 32.0;

    printf("Temperature in F: %.1f\n", f);
    return 0;
}
