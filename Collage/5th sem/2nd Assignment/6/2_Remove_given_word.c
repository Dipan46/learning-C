#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], rem[100], arr[100];
    int a = 0, b, l, m, i, j;
    printf("Enter any string: ");
    gets(str);
    printf("\nEnter the word to remove: ");
    gets(rem);
    l = strlen(str);
    while (a < l)
    {
        b = 0;
        for (i = a; i < l; i++)
        {
            a++;
            if (str[i] == ' ')
            {
                arr[a - 1] = '\0';
                break;
            }
            else
            {
                arr[b] = str[i];
                b++;
            }
        }
        if (strcmp(rem, arr) == 0)
        {
            for (i = 0; i != (b + 1); i++)
                for (j = ((a - b) - 1); j < l; j++)
                    str[j] = str[j + 1];
        }
    }
    printf("\nAfter removal: %s", str);
    return 0;
}