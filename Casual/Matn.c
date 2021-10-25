#include <stdio.h>
#include <math.h>

int main()
{
    float a, s, c, t, p;

    printf("Enter a Value: ");
    scanf("%f", &a);

    s = sin(a);
    c = cos(a);
    t = tan(a);
    p = pow(a, 2);

    printf("%f\n%f\n%f\n%f", s, c, t, p);

    return 0;
}
