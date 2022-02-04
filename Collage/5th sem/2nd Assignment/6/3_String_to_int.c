#include <stdio.h>
int main()
{
    char str[100], c;
    int n = 0, i = 0;
    printf("Enter anything: ");
    gets(str);
    while (str[i] != '\0')
    {
        n = n * 10 + (str[i] - 48);
        i++;
    }
    printf("%d", n);
    return 0;
}
