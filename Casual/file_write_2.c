#include <stdio.h>
int main()
{
    char str[100];
    FILE *fp;
    printf("Write anything: ");
    gets(str);
    fp = fopen("file.txt", "a");
    if (fp == NULL)
        printf("Error\a");
    else
    {
        fprintf(fp, "%s", str);
        fputc('\n', fp);
    }
    fclose(fp);
    return 0;
}