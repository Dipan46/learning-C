#include <stdio.h>
#include <math.h>
#define PI 3.141
void distance(float, float, float, float);
void circle(float);
int main()
{
    float a1, a2, b1, b2;
    printf("Enter x1, y2 point: ");
    scanf("%f, %f", &a1, &b1);
    printf("Enter x2, y2 point: ");
    scanf("%f, %f", &a2, &b2);
    distance(a1, a2, b1, b2);
    return 0;
}
void distance(float x1, float x2, float y1, float y2)
{
    float d;
    d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    circle(d);
}
void circle(float r)
{
    float a;
    a = PI * pow(r, 2);
    printf("Distance between 2 point is: %.3f\n", r);
    printf("Area of the circle is: %.3f", a);
}