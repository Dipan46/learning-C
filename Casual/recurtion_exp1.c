#include <stdio.h>
int rec(int n)
{
    if (n == 0)
        return 0;
    else
        return rec((n - 1) * n);
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    rec(n);
    printf("%d", n);
    return 0;
}
