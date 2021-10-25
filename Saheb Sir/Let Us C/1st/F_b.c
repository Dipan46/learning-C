#include <stdio.h>
int main()
{
    float D, m, ft, in, cm;
    //Input
    printf("Enter the Distance(km): ");
    scanf("%f", &D);
    //Calculation
    m = D * 1000;
    ft = D * 3280.84;
    in = D * 39370.078740157;
    cm = D * 100000;
    //Output
    printf("Distance in Meter: %f\n", m);
    printf("Distance in Feet: %f\n", ft);
    printf("Distance in Inch: %f\n", in);
    printf("Distance in CM: %f\n", cm);
    return 0;
}
