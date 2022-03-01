#include <stdio.h>
int main()
{
    char a[100], b[100];
    int i, j = 0, k;

    printf("Enter 1st string: ");
    gets(a);
    printf("Enter 2nd string: ");
    gets(b);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == b[j])
            j++;
        else if (a[i] == b[0])
            j = 1;
        else
            j = 0;
        if (b[j] == '\0')
        {
            i = i + 1 - j;
            for (k = i; a[k] != '\0'; k++)
                a[k] = a[k + j];
        }
    }
    printf("After removal: %s", a);
    return 0;
}
