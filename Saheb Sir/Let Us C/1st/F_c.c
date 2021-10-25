#include <stdio.h>
int main()
{
    int E, M, S, B, G, A, P;
    //Input
    printf("Marks Obtain in English: ");
    scanf("%d", &E);
    printf("Marks Obtain in Math: ");
    scanf("%d", &M);
    printf("Marks Obtain in Science: ");
    scanf("%d", &S);
    printf("Marks Obtain in Bengali: ");
    scanf("%d", &B);
    printf("Marks Obtain in Geography: ");
    scanf("%d", &G);
    //Calculation
    A = E + M + S + B + G;
    P = A / 5;
    //Output
    printf("Aggregate: %d\n", A);
    printf("Percentage: %d\n", P);
    return 0;
}
