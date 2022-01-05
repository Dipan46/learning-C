#include <stdio.h>
int main()
{
    int n, c, e = 0, o = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    // loop to check divisible or not
    for (int i = 1; n > 0; i++)
    {
        c = n % 10;
        // checking even or odd (c)
        if (i % 2 == 0)
            e = e + c;
        else
            o = o + c;
        n = n / 10;
    }
    // checking equal or not(e and o)
    if (e == o)
        printf("Divisible");
    else
        printf("Not divisible");
    return 0;
}