#include <stdio.h>
void main()
{
    int T, N, a = 0;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        int A[N], j = 0;
        for (int i = 0; i < N; i++)
            scanf("%d", &A[i]);
        if (N % 2 == 0)
            printf("YES\n");
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (A[i] != A[i + 1])
                {
                    j++;
                    break;
                }
            }
            if (j % 2 == 0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
