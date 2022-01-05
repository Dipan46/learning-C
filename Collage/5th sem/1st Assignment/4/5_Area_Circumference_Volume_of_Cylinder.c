#include <stdio.h>
int main()
{
    float r, h, c;
    char a;
    printf("|a for Area, v for Volume, C for Circumference|");
    printf("\nEnter what you want to calculate: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
        printf("Enter the radius: ");
        scanf("%f", &r);
        c = 3.14 * r * r;
        printf("Area is: %.3f", c);
        break;
    case 'v':
        printf("Enter the radius: ");
        scanf("%f", &r);
        printf("Enter the hight: ");
        scanf("%f", &h);
        c = 3.14 * h * r * r;
        printf("Volume is: %.3f", c);
        break;
    case 'c':
        printf("Enter radius: ");
        scanf("%f", &r);
        c = 2 * 3.14 * r;
        printf("Circumference is: %.3f", c);
        break;
    }
    return 0;
}