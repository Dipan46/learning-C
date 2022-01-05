#include <stdio.h>
int main()
{
    int a, i, b = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    // Loop to multiply previous num with next number
    for (i = 1; i <= a; i++)
        b = i * b;
    printf("Factorina of %d is: %d", a, b);
    return 0;
}
