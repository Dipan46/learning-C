#include <stdio.h>
int main()
{
    int a, b, i = 1;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    while (i <= a * b)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("LCM is: %d", i);
            break;
        }
        else
            i++;
    }
    return 0;
}
