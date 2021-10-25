#include <stdio.h>

int main()
{
    int l, u, x, i;
    printf("Enter The 1st Number: ");
    scanf("%d", &l);
    printf("Enter The 2nd Number: ");
    scanf("%d", &u);

    printf("Prime Numbers are: ");
    for (int x = l; x <= u; x++)
    {
        for (i = 2; i < x; i++)
            if (x % i == 0)
                break;
        if (i == x)
            printf("%d ", x);
    }
    return 0;
}
