#include <stdio.h>

int main()
{
    int n1, n2, d1, d2, fd, n1m, n2m, fn;
    float total;
    printf("Enter the 1st numerator: ");
    scanf("%d", &n1);
    printf("Enter the 1st denominator: ");
    scanf("%d", &d1);
    printf("Enter the 2nd numerator: ");
    scanf("%d", &n2);
    printf("Enter the 2nd denominator: ");
    scanf("%d", &d2);

    fd = d1 * d2;
    n1m = d2 * n1;
    n2m = d1 * n2;
    total = (float)(n1m + n2m) / (float)fd;

    printf("Sum of %d/%d + %d/%d is", n1, d1, n2, d2);
    printf("\n=(%d + %d)/%d", n1m, n2m, fd);
    printf("\n=%d/%d", (n1m, n2m), fd);
    printf("\n=%.3f", total);

    return 0;
}