#include <stdio.h>
int main()
{
    char str[100];
    FILE *fp;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
        printf("Error\a");
    else
        while (fgets(str, 10, fp) != NULL)
            printf("%s", str);
    fclose(fp);
    return 0;
}
