#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    int l, i, j;
    printf("Enter anything: ");
    gets(arr);
    l = strlen(arr);
    for (i = 0; i < l; i++) // accessing string
    {
        // checking vowel or not
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            for (j = i; j < l; j++) // shifting position by 1
                arr[j] = arr[j + 1];
        }
        else
            continue;
    }
    puts(arr);
    return 0;
}
