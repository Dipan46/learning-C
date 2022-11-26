#include <stdio.h>

int main(void)
{
    int T, X, Y, Z;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &X, &Y, &Z);
        X = X * 4;
        Y = Y * 2;
        Z = Z * 0;
        printf("%d\n", X + Y + Z);
    }
    return 0;
}