#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    // condition
    if (a % 2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");
    return 0;
}
