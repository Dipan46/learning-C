#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], new[100];
    int i, j = 0, l;
    char ch;

    printf("Enter a String To Remove Vowels: ");
    gets(str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        ch = str[i];
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            break;
        default:
        {
            new[j] = str[i];
            j++;
        }
        }
    }
    new[j] = '\0';
    printf("String After Removing Vowels: %s", new);
    return 0;
}
