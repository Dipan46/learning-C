#include <stdio.h>
int octal(int);
int decimal(int);

int main()
{
    int bin, dec, oct;
    printf("Enter the binary number: ");
    scanf("%d", &bin);

    dec = decimal(bin);
    oct = octal(dec);

    printf("Octal is: %d", oct);
    return 0;
}
int decimal(int b)
{
    int pow = 1, dec = 0;
    int rem;
    while (b != 0)
    {
        rem = b % 10;
        dec = dec + rem * pow;
        b = b / 10;
        pow = pow * 2;
    }
    return dec;
}
int octal(int d)
{
    int oct = 0;
    int rem;
    while (d != 0)
    {
        rem = d % 8;
        oct = oct + rem * 10;
        d = d / 8;
    }
    return oct;
}
