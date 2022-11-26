#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    char str[] = {'1', '2', '3', '4', '5'};
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        fflush(stdin);
        char K[N];
        scanf("%[^\n]", K);
        fflush(stdin);
        puts(K);
    }
    return 0;
}
