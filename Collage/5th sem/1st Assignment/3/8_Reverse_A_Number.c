#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any number: ");
    scanf("%d", &a);
    // Loop to reverse
    for (; a != 0;)
    {
        b = a % 10;
        printf("%d", b);
        a = a / 10;
    }
    return 0;
}
