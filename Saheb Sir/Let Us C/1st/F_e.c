#include <stdio.h>
int main()
{
    int L, B, D, P, A;
    float C, CA;
    //Input
    //Rectangle
    printf("Enter Length of Rectangle: ");
    scanf("%d", &L);
    printf("Enter Breath of Rectangle: ");
    scanf("%d", &B);
    //Circle
    printf("Enter Diameter of Circle: ");
    scanf("%d", &D);
    //Calculation
    //Rectangle
    P = L + B;
    A = L * B;
    //Circle
    C = 2 * 3.14 *(D/2);
    CA = 3.14 * (D/2) * 2;
    //Output
    //Rectangle
    printf("Area of Rectangle: %d\n", A);
    printf(" Perimeter of Rectangle: %d\n", P);
    //Circle
    printf("Area of Circle: %f\n", CA);
    printf("Circumference of Circle: %f\n", C);
    return 0;
}
