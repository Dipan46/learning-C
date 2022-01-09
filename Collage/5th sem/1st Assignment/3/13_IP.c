#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, i, j, ip4;
    char str[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'}, ip6;
    printf("Enter How Many IP Addresses You Want To Print: ");
    scanf("%d", &a);
    printf("What You Want IPv4 Or IPv6 Enter (4 Or 6): ");
    scanf("%d", &b);
    switch (b)
    {
    case 4:
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < 4; j++)
            {
                ip4 = rand() % 255;
                printf("%d", ip4);
                if (j < 3)
                    printf(".");
            }
            printf("\n");
        }
        break;
    case 6:
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    ip6 = str[rand() % 16];
                    printf("%c", ip6);
                }
                if (j < 7)
                    printf(".");
            }
            printf("\n");
        }
        break;
    default:
        printf("Enter Either 4 or 6!\a");
    }
    return 0;
}
