#include <stdio.h>
void TOH(int, char, char, char);
int main()
{
    int d;
    printf("Enter number of disc: ");
    scanf("%d", &d);
    TOH(d, 'A', 'B', 'C');
    return 0;
}
void TOH(int n, char beg, char aux, char end)
{
    if (n >= 1)
    {
        TOH(n - 1, beg, end, aux);
        printf("%c to %c\n", beg, end);
        TOH(n - 1, aux, beg, end);
    }
}
