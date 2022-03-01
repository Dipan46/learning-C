#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;
    char str[20];
    printf("Enter file name: ");
    gets(str);

    fp = fopen(str, "r+");
    if (fp == NULL)
        printf("Error in opening");
    getch();
}
