#include <stdio.h>
#include <string.h>
typedef struct detail
{
    char name[20], route[50];
    int ln, km;
} dtl;
int main()
{
    dtl d1;
    FILE *fp;
    printf("Enter the name: ");
    gets(d1.name);
    printf("Enter the license number: ");
    scanf("%d", &d1.ln);
    fflush(stdin);
    printf("Enter the route: ");
    gets(d1.route);
    printf("Enter the distance traveled: ");
    scanf("%d", &d1.km);
    fp = fopen("Detail.txt", "a");
    if (fp == NULL)
        printf("Error");
    else
        fprintf(fp, "Name: %s\nLicense number: %d\nRoute: %s\nDistance traveled: %d\n", d1.name, d1.ln, d1.route, d1.km);
    fclose(fp);
    return 0;
}
