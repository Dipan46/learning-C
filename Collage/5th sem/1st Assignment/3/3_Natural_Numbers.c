#include <stdio.h>
int main()
{
    int a, c = 0;
    printf("Enter any number: ");
    scanf("%d", &a);
    while (a > 0)
    {
        c = c + a;
        a--;
    }
    printf("%d", c);
}