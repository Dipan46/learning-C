#include <stdio.h>
int main()
{
    float a, b, c, d, e, t;
    printf("Enter marks obtained in 1st sub: ");
    scanf("%f", &a);
    printf("Enter marks obtained in 2nd sub: ");
    scanf("%f", &b);
    printf("Enter marks obtained in 3rd sub: ");
    scanf("%f", &c);
    printf("Enter marks obtained in 4th sub: ");
    scanf("%f", &d);
    printf("Enter marks obtained in 5th sub: ");
    scanf("%f", &e);
    t = (a + b + c + d + e) / 5.0;
    printf("Avarage is: %.2f", t);
    return 0;
}