#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], *revStr;

    printf("Enter Any String Without Space: ");
    gets(str);

    revStr = strrev(str);
    printf("Reverse string is : %s", revStr);
    return 0;
}
