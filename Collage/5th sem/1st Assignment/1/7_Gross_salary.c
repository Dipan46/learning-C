#include <stdio.h>
int main()
{
    float B, G, DA, da, HRA, hra, MA, ma;
    printf("Enter basic salary: ");
    scanf("%f", &B);
    printf("Enter dearness allowance(%%): ");
    scanf("%f", &da);
    printf("Enter house rent allowance(%%): ");
    scanf("%f", &hra);
    printf("Enter medical allowance(%%): ");
    scanf("%f", &ma);
    // Calculation
    DA = (B * da) / 100.0;
    HRA = (B * hra) / 100.0;
    MA = (B * ma) / 100.0;
    G = B + DA + HRA + MA;

    printf("Gross saclary in hand is: %.3f", G);
    return 0;
}