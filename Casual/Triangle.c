#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j;

    printf("How many row you want in pyramid: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
