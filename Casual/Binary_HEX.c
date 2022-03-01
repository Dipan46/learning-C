#include <stdio.h>
int decimal(int);
int main()
{
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char str[20];
    int bin, dec, rem, rem2;
    int num = 0, num2 = 0;
    int i = 0, k = 0, j, o;
    printf("Enter Binary number: ");
    scanf("%d", &bin);

    while ()
    {
        k = o;
        while (k < (o + 5))
        {
            rem = bin % 10;
            num = bin + num * 100;
            bin = bin / 10;
            k++;
            o++;
        }
        while (num != 0)
        {
            rem2 = num % 10;
            num2 = num + rem2 * 10;
            num = num / 10;
        }

        dec = decimal(num2);
        j = dec;
        str[i] = hex[j];
        i++;
    }
    str[i] = '\0';
    printf("HEX form is: ");
    puts(str);
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