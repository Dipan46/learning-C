#include <stdio.h>
void main()
{
    int t, n, i, j, c = 0;
    scanf("%d", &t);
    while (t--)
    {
        c = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        if (n % 2 == 0)
            printf("YES\n");
        if (n % 2 == 1)
        {
            for (i = 0; i < n; i++)
                for (j = i + 1; j < n; j++)
                    if (arr[i] == arr[j])
                    {
                        c = 1;
                        break;
                    }
            if (c == 0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
}
