#include <stdio.h>
void km_m(float, float);
void calculate(float, float);

typedef struct Distance
{
    float d1;
    float d2;
} dis;
int main()
{
    dis d;
    printf("Enter 1st distance(km): ");
    scanf("%f", &d.d1);
    printf("Enter 2nd distance(m): ");
    scanf("%f", &d.d2);

    printf("1st Distance is: %.3f km\n2nd Distance is: %.3f m\n", d.d1, d.d2);
    km_m(d.d1, d.d2);
    return 0;
}
void km_m(float d1, float d2)
{
    d1 = d1 * 1000;
    calculate(d1, d2);
}
void calculate(float d1, float d2)
{
    printf("Addition: %.3f m\n", d1 + d2);
    printf("Subtraction: %.3f m\n", d1 - d2);

    printf("Addition: %.3f km\n", (d1 + d2) / 1000);
    printf("Subtraction: %.3f km", (d1 - d2) / 1000);
}