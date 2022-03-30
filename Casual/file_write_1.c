#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    FILE *fp;
    char str[100];
    printf("Write anything: ");
    gets(str);
    fp = fopen("file.txt", "a");
    if (fp == NULL)
        printf("Error\a");
    else
        for (i = 0; i <= strlen(str); i++)
        {
            if (i == strlen(str))
                fputc('\n', fp);
            else
                fputc(str[i], fp);
        }
    fclose(fp);
    return 0;
}
