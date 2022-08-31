#include <stdio.h>
void LeapYear(int);

typedef struct Data
{
    int year;
} ly;
int main()
{
    ly y;
    printf("Enter the year: ");
    scanf("%d", &y.year);

    LeapYear(y.year);
    return 0;
}
void LeapYear(int n)
{
    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
                printf("Year is a Leap Year");
            else
                printf("Year is not a Leap Year");
        }
        else
            printf("Year is a Leap Year");
    }
    else
        printf("Year is not a Leap Year");
}
