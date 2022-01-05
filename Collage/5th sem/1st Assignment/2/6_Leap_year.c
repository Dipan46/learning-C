#include <stdio.h>

int main()
{
    int y;

    printf("Enter a Year: ");
    scanf("%d", &y);
    if (y % 4 == 0)
        if (y % 100 == 0)
            if (y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("%d is Not a Leap Year", y);
        else
            printf("%d is a Leap Year", y);
    else
        printf("%d is Not a Leap Year", y);
    return 0;
}