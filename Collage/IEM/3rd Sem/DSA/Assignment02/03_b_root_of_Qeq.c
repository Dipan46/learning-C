#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2, d;

    printf("Input the value of a: ");
    scanf("%f", &a);
    printf("Input the value of b: ");
    scanf("%f", &b);
    printf("Input the value of c: ");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        printf("Both roots are equal.\n");
        r1 = -b / (2 * a);
        r2 = r1;
        printf("First  Root= %.3f\n", r1);
        printf("Second Root= %.3f\n", r2);
    }
    else if (d > 0)
    {
        printf("Both roots are real and diff\n");
        r1 = -b + sqrt(d) / (2 * a);
        r2 = -b - sqrt(d) / (2 * a);
        printf("First  Root= %.3f\n", r1);
        printf("Second Root= %.3f\n", r2);
    }
    else
        printf("Root are imaginary\nNo Solution. \n");
    return 0;
}
