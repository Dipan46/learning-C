#include <stdio.h>
int main()
{
    FILE *fp;
    char str[20], ch;
    printf("Enter file name: ");
    gets(str);

    fp = fopen(str, "r");
    if (fp == NULL)
        printf("Error in opening or file do not exist");
    else
        while ((ch = fgetc(fp)) != EOF)
            printf("%c", ch);
    return 0;
}
