#include <stdio.h>

int main()
{
    int ll, ul, x, i;
    printf("Enter The 1st Number: ");
    scanf("%d", &ll);
    printf("Enter The 2nd Number: ");
    scanf("%d", &ul);

    printf("Composite Numbers are: ");
    for (x = ll; x <= ul; x++)
    {
        for (i = 2; i < x; i++)
            if (x % i == 0)
                break;
        if (i != x && x != 1)
            printf("%d ", x);
    }
    return 0;
}