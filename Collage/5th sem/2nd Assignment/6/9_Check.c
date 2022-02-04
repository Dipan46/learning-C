#include <stdio.h>

int main()
{
    char str[100];
    int i, v, c, d, s;
    v = c = d = s = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            v++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            c++;
        else if (str[i] >= '0' && str[i] <= '9')
            d++;
        else if (str[i] == ' ')
            s++;
    }
    printf("Total Number of Vowels Are: %d", v);
    printf("\nTotal Number of Consonants Are: %d", c);
    printf("\nTotal Number of Digits Are: %d", d);
    printf("\nTotal Number of White spaces Are: %d", s);
    return 0;
}