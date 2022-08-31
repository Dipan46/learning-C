#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int l;
    printf("Enter anything: ");
    gets(str);
    printf("String is: ");
    puts(str);
    l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] == ';')
            str[i] = '.';
    }
    printf("New string is: ");
    puts(str);
    return 0;
}