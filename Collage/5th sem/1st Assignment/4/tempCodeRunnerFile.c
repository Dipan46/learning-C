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
    for (int k = 0; k < 4; k++)
    {
        ip6 = str[rand() % 16];
        printf("%c", ip6);
    }
    return 0;
}