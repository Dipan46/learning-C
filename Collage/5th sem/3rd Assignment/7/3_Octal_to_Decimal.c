#include <stdio.h>
int decimal(int);
int main()
{
    int oct, d;
    printf("Enter the octal value: ");
    scanf("%d", &oct);

    d = decimal(oct);
    printf("Decimal is: %d", d);
    return 0;
}
int decimal(int o)
{
    int dec = 0, wt = 1;
    int rem;
    while (o != 0)
    {
        rem = o % 10;
        dec = dec + rem * wt;
        o = o / 10;
        wt = wt * 8;
    }
    return dec;
}