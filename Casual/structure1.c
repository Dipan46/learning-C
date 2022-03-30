#include <stdio.h>
void output(char[], char[], char[], int);

typedef struct student
{
    char name[20], reg[20], roll[20];
    int no;
} stu;
int main()
{
    stu D192019013;
    printf("Enter the name: ");
    gets(D192019013.name);
    printf("Enter the registration: ");
    gets(D192019013.reg);
    printf("Enter the roll: ");
    gets(D192019013.roll);
    printf("Enter number: ");
    scanf("%d", &D192019013.no);
    output(D192019013.name, D192019013.reg, D192019013.roll, D192019013.no);
    return 0;
}
void output(char name[], char reg[], char roll[], int no)
{
    printf("Name is : %s\n", name);
    printf("Registration no. is: %s\n", reg);
    printf("Roll is: %s\n", roll);
    printf("Number is: %d\n", no);
}
