#include <stdio.h>
#include <conio.h>

void main()
{
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("%d, %d, %d\n", a, ++a, a++);

    getch();
}
