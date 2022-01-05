#include <stdio.h>
int main()
{
    float P, N, R, SI;

    printf("Enter the value of P: ");
    scanf("%f", &P);
    printf("Enter the value of N: ");
    scanf("%f", &N);
    printf("Enter the value of R: ");
    scanf("%f", &R);
    /*Formula*/
    SI = (P * N * R) / 100.0;
    printf("Answer: %f\n", SI);
    return 0;
}
