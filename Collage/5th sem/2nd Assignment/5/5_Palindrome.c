#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], arr[20];
    int a, i, l, j = 0, r = 0;
    printf("Enter the word: ");
    scanf("%s", &str);

    l = strlen(str);
    // transfering value from str[20] to arr[20] in reverse order
    for (i = l - 1; i > -1; i--)
    {
        arr[j] = str[i];
        j++;
    }
    // Checking palendrome or not
    for (i = 0; i < l; i++)
    {
        if (str[i] == arr[i])
            continue;
        else
        {
            r++;
            break;
        }
    }
    if (r == 0)
        printf("%s is a Palindrome", str);
    else
        printf("%s is not a Palindrome", str);
    return 0;
}
