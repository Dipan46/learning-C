#include <stdio.h>
int main()
{
    int a;
    printf("Enter any value: ");
    scanf("%d", &a);
    if (a < 0)
        printf("A is negative");
    else
        printf("A is positive");
    return 0;
}