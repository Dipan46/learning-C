#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    char *a, *b;
    int com = 0;

    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);

    a = str1;
    b = str2;

    if (strlen(a) != strlen(b))
        printf("Strings are different");
    else
    {
        while (*a != '\0')
        {
            if (*a != *b)
            {
                com++;
                break;
            }
            a++;
            b++;
        }
        if (com == 1)
            printf("Strings are different");
        else
            printf("Strings are same");
    }
    return 0;
}
