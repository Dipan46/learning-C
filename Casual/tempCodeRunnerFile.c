#include <stdio.h>
#include <string.h>
void even_odd(char[]);
int main()
{
    char str1[100], str2[100];
    int k, j;
    scanf("%d", &k);
    gets(str1);
    gets(str2);

    fflush(stdin);
    for (j = 0; j < k; j++)
    {
        if (j == 0)
            even_odd(str1);
        else
            even_odd(str2);
    }
    return 0;
}
void even_odd(char str[])
{
    int l, i;

    l = strlen(str);

    for (i = 0; i < l; i++)
        if (i % 2 == 0)
            printf("%c", str[i]);
    printf(" ");
    for (i = 1; i < l; i++)
        if (i % 2 != 0)
            printf("%c", str[i]);
    printf("\n");
}