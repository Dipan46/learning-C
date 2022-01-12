#include <stdio.h>
int main()
{
    int d, m, y, l = 0;
    printf("Enter date: ");
    scanf("%d", &d);
    printf("Enter month: ");
    scanf("%d", &m);
    printf("Enter year: ");
    scanf("%d", &y);
    // Checking leap year
    if (y % 4 == 0)
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
                l++;
        }
        else
            l++;
    // Checking month upto July
    if (m < 8)
    {
        // Checking 29th feb
        if (l != 1 && m == 2 && d == 29)
            printf("Day is Invalid\n");
        // Checking 31st day is valid or not
        else if (m % 2 == 0 && d == 31)
            printf("Day is Invalid\n");
        else
            printf("Day is Valid\n");
    }
    // Checking month after July
    else if (m > 7)
    {
        // Checking 31st day is valid or not
        if (m % 2 == 0 && d == 31)
            printf("Day is Valid\n");
        else
            printf("Day is Invalid\n");
    }
    // Checking month
    if (m < 1 || m > 12)
        printf("Month is  invlid\n");
    else
        printf("Month is Valid\n");
    printf("Year is Valid\n");
    return 0;
}
