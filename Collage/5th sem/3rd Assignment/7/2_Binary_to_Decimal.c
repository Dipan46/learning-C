#include <stdio.h>
int decimal(int);
int main()
{
    int bin, dec;
    printf("Enter Binary number: ");
    scanf("%d", &bin);
    dec = decimal(bin);
    printf("Decimul form is: %d", dec);
    return 0;
}
int decimal(int n)
{
    int wt = 1, dec = 0;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        dec = dec + rem * wt;
        n = n / 10;
        wt = wt * 2;
    }
    return dec;
}