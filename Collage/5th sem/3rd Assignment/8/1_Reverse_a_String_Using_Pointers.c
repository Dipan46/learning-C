#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], *revStr;

    printf("Enter Any String: ");
    gets(str);

    revStr = strrev(str);
    printf("Reverse string is: %s", revStr);
    return 0;
}
