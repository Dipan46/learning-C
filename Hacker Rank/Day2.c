#include <stdio.h>
int main()
{
    float m, total, tip, tax;
    float ti, ta;
    scanf("%f", &m);
    scanf("%f", &ti);
    scanf("%f", &ta);

    tip = m * (ti / 100);
    tax = m * (ta / 100);

    total = m + tip + tax;

    printf("%.0f", total);

    return 0;
}
