#include <stdio.h>
int main()
{
    float F, C;
    //Input
    printf("Enter Temperature(°F): ");
    scanf("%f", &F);
    //Calculation
    C = (F - 32) * 5 / 9;
    //Output
    printf("Temperature in °C: %f", C);
    return 0;
}
