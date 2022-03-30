#include <stdio.h>
int main()
{
    int a, b;
    FILE *fp;
    fp = fopen("file.txt", "a");

    printf("Enter 1st Value: ");
    scanf("%d", &a);
    printf("Enter 2nd value: ");
    scanf("%d", &b);

    if (fp == NULL)
        printf("Error\a");
    else
        fprintf(fp, "%d + %d = %d\n", a, b, a + b);

    fclose(fp);
    return 0;
}