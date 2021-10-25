#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Positive");
    }

    return 0;
}
