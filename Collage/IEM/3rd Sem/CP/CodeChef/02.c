#include <stdio.h>

void main()
{
    int T, X, P, Q;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &X, &P, &Q);
        printf("%d\n", X * (P - Q));
    }
}
