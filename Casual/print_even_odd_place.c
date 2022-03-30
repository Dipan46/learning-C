#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int l, i;
    gets(str);

    l = strlen(str);

    for (i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            printf(" ");
            continue;
        }
        else if (i % 2 == 0)
            printf("%c", str[i]);
    }
    printf("\n");
    for (i = 1; i < l; i++)
    {
        if (str[i] == ' ')
        {
            printf(" ");
            continue;
        }
        else if (i % 2 != 0)
            printf("%c", str[i]);
    }
    return 0;
}
