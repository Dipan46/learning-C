#include <stdio.h>
#include <conio.h>
int main()
{
    char a, arr[] = "*";
    printf("Enter anything: ");
    for (int i = 0; i < 100; i++)
    {
        a = getch();
        if (a == ' ')
            printf(" ");
        else
            printf("%c", arr[0]);
    }
    return 0;
}
