#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter which table you want: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        b = a * i;
        printf("%d * %d = %d\n", a, i, b);
    }
    return 0;
}
