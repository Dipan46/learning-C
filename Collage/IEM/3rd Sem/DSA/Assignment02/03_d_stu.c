#include <stdio.h>
#include <stdlib.h>
typedef struct StudentID
{
    int NO_S;
    char *reg;
    char name[20];
} ID;
int main()
{
    FILE *fp;
    ID IEM;
    int i;

    printf("Enter number of student: ");
    scanf("%d", &IEM.NO_S);
    fflush(stdin);
    for (i = 0; i < IEM.NO_S; i++)
    {
        printf("Enter name of the student: ");
        gets(IEM.name);
        IEM.reg = (char *)malloc(sizeof(char));
        fflush(stdin);

        printf("Enter the Registration No: ");
        scanf("%s", IEM.reg);

        fp = fopen("student_DB.txt", "a");
        if (fp == NULL)
        {
            printf("There is no such file!\a");
            exit(1);
        }
        else
            fprintf(fp, "Registration No of %s: %s\n", IEM.name, IEM.reg);
        fflush(stdin);
        free(IEM.reg);
    }
    fclose(fp);
    return 0;
}
