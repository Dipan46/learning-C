#include <stdio.h>
int main()
{
    int P, N;
    float R, SI;

    printf("Enter the value of P: ");
    scanf("%d", &P);
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the value of R: ");
    scanf("%f", &R);
    /*Formula*/
    SI = P * N * R / 100;
    printf("Answer: %f\n", SI);
    return 0;
}
