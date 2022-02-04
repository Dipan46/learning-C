#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100], str[100];

    printf("Enter The First String: ");
    gets(arr);

    printf("Enter The Second String: ");
    gets(str);

    if (strcmp(arr, str) == 0)
        printf("Strings Are Equal");
    else
        printf("Strings Are Not Equal");
    return 0;
}
