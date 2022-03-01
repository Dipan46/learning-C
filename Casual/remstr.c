#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rem[100], arr[100], new[100];
    int a = 0, c = 0;
    int b, l, i;
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
        if (strcmp(rem, arr) != 0)
        {
            for (i = 0; i != strlen(arr); i++)
            {
                new[c] = arr[i];
                c++;
            }
            new[c] = ' ';
        }
    }
    printf("\nAfter removal: %s", new);
    return 0;
}