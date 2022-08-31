#include <stdio.h>
int main()
{
    char arr1[5], arr2[5];
    int n = 4, i;

    printf("Enter anything\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%c", &arr1[i]);
        fflush(stdin);
    }
    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[n];
        n--;
    }
    for (i = 0; i < 5; i++)
    {
        if (arr2[i] >= 97 && arr2[i] <= 122)
            arr2[i] = arr2[i] - 32;
    }
    printf("After operation: ");
    for (i = 0; i < 5; i++)
        printf("%c\t", arr2[i]);

    return 0;
}