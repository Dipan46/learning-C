#include <stdio.h>
int main()
{
    char f, m, l[10];

    printf("Enter first name: ");
    scanf("%c", &f);
    fflush(stdin);
    printf("Enter middle name: ");
    scanf("%c", &m);
    fflush(stdin);
    printf("Enter last name: ");
    scanf("%s", &l);
    printf("%c.%c.%s", f, m, l);
    return 0;
}
