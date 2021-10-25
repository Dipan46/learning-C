#include <stdio.h>
int main()
{
    float S, D, H, G;
    //Input
    printf("Enter The Amount: ");
    scanf("%f", &S);
    //Dearness Allowance
    D = (40 * S / 100);
    //House Rent
    H = (20 * S / 100);
    //Gross
    G = S + D - H;
    //Output
    printf("Gross: %f", G);
    return 0;
}
