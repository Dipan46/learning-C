#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
        printf("Error\a");
    else
        while (!feof(fp))
        {
            ch = fgetc(fp);
            printf("%c", ch);
        }
    fclose(fp);
    return 0;
}