#include <stdio.h>
int main()
{
    int i, j, k, d, da = 1;
    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d", &d);
    printf("Enter First Day(Sun = 0 / Sat = 6) : ");
    scanf("%d", &k);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n");
    j = k;
    while (j > 0)
    {
        printf("\t");
        j--;
    }
    while (da <= d)
    {
        if (k != 0)
        {
            if (k % 7 == 0)
                printf("\n");
        }
        printf("%d\t", da);
        da++;
        k++;
    }
    return 0;
}