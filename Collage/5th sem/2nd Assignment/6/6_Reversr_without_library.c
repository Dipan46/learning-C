#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int l;
    printf("Enter anything: ");
    gets(str);
    l = strlen(str);
    for (int i = l; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
