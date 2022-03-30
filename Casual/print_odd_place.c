#include <stdio.h>
#include <string.h>
void even_odd(char[]);
int main()
{
    char str1[100], str2[100];
    int j, k;
    printf("Enter number of loop: ");
    scanf("%d", &k);
    fflush(stdin);
    printf("Enter 1st steing: ");
    scanf("%[^\n]", str1);
    fflush(stdin);
    printf("Enter 2nd string: ");
    scanf("%[^\n]", str2);

    for (j = 0; j < k; j++)
    {
        if (j == 0)
            even_odd(str1);
        else if (j == 1)
            even_odd(str2);
    }
    return 0;
}
void even_odd(char str[])
{
    int l, i;

    l = strlen(str);
    printf("After processing: ");
    for (i = 0; i < l; i++)
        if (i % 2 == 0)
            printf("%c", str[i]);
    printf(" ");
    for (i = 1; i < l; i++)
        if (i % 2 != 0)
            printf("%c", str[i]);
    printf("\n");
}
