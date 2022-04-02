#include <stdio.h>
#include <stdlib.h>
typedef struct StudentID
{
    int NO_S;
    int SO_reg;
    char *reg;
    char name[20];
} ID;
int main()
{
    FILE *fp;
    ID RGP;
    int i;

    printf("Enter number of student: ");
    scanf("%d", &RGP.NO_S);
    fflush(stdin);
    for (i = 0; i < RGP.NO_S; i++)
    {
        printf("Enter name of the student: ");
        gets(RGP.name);
        printf("Enter the size of Registration No: ");
        scanf("%d", &RGP.SO_reg);
        RGP.reg = (char *)malloc((RGP.SO_reg + 1) * sizeof(char));
        fflush(stdin);

        printf("Enter the Registration No: ");
        scanf("%s", RGP.reg);

        fp = fopen("student_DB2.xlsx", "a");
        if (fp == NULL)
        {
            printf("There is no such file!\a");
            exit(1);
        }
        else
            fprintf(fp, "Registration No of %s: %s\n", RGP.name, RGP.reg);
        fflush(stdin);
        free(RGP.reg);
    }
    fclose(fp);
    return 0;
}