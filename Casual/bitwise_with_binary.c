#include <stdio.h>

int binary(int);
int decimal(int);
int AND(int, int);
int OR(int, int);
int XOR(int, int);

int main()
{
    int num1, num2;
    int bin1, bin2;
    int and, or, xor;
    int a, o, x;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    // Decimal to binary
    bin1 = binary(num1);
    bin2 = binary(num2);
    // Bitwise operation
    and = AND(bin1, bin2);
    or = OR(bin1, bin2);
    xor = XOR(bin1, bin2);
    // Binary to decimal
    a = decimal(and);
    o = decimal(or);
    x = decimal(xor);

    printf("AND: ", a);
    printf("OR: ", o);
    printf("XOR: ", x);

    return 0;
}
int binary(int n)
{
    int bin = 0, place = 1;
    int rem;

    while (n != 0)
    {
        rem = n % 2;
        bin = bin + (rem * place);
        n = n / 2;
        place = place * 10;
    }
    return bin;
}
int AND(int x, int y)
{
    int rem_x, rem_y;
    int i, n = 0;
    while ()
    {
        rem_x = x % 10;
        rem_y = y % 10;
        if (rem_x == 1 && rem_y == 1)
            i = 1;
        else
            i = 0;
        rem_x = x / 10;
        rem_y = y / 10;
        n = n + i;
    }
    return n;
}
int OR(int x, int y)
{
    int rem_x, rem_y;
    int i, n = 0;
    while ()
    {
        rem_x = x % 10;
        rem_y = y % 10;
        if (rem_x == 0 || rem_y == 0)
            i = 0;
        else if (rem_x == 1 && rem_y == 0)
            i = 1;
        else if (rem_x == 0 && rem_y == 1)
            i = 1;
        else if (rem_x == 1 && rem_y == 1)
            i = 1;
        rem_x = x / 10;
        rem_y = y / 10;
        n = n + i;
    }
    return n;
}
int XOR(int x, int y)
{
    int rem_x, rem_y;
    int i, n = 0;
    while ()
    {
        rem_x = x % 10;
        rem_y = y % 10;
        else if (rem_x == 1 && rem_y == 0)
            i = 1;
        else if (rem_x == 0 && rem_y == 1)
            i = 1;
        else i = 0;
        rem_x = x / 10;
        rem_y = y / 10;
        n = n + i;
    }
    return n;
}
