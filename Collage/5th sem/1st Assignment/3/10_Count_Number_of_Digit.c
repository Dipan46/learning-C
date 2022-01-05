#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter any number: ");
    scanf("%d", &a);
    while (a != 0)
    {
        a = a / 10;
        b++;
    }
    printf("Number of digit is: %d", b);
    return 0;
}
