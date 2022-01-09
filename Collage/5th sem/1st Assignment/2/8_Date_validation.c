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
    while (m < 8)
    {
        // Checking 29th feb
        if (l != 1 && m == 2 && d == 29)
        {
            printf("Day is Invalid\n");
            break;
        }
        // Checking 31st day is valid or not
        else if (m % 2 == 0 && d == 31)
        {
            printf("Day is Invalid\n");
            break;
        }
        else
        {
            printf("Day is Valid\n");
            break;
        }
        break;
    }
    // Checking month after July
    while (m > 7)
    {
        // Checking 31st day is valid or not
        if (m % 2 == 0 && d == 31)
        {
            printf("Day is Valid\n");
            break;
        }
        else
        {
            printf("Day is Invalid\n");
            break;
        }
        break;
    }
    // Checking month
    if (m < 1 || m > 12)
        printf("Month is  invlid\n");
    else
        printf("Month is Valid\n");
    printf("Year is Valid\n");
    return 0;
}