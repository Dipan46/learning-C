#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    int l, i, j;
    printf("Enter any string: ");
    gets(arr);
    l = strlen(arr);
    for (int m = 0; m < l; m++)         // Runing the loop for l time
        for (i = 0; i < l; i++)         // 1st loop to check all value
            for (j = i + 1; j < l; j++) // 2nd loop to check all value
                if (arr[i] == arr[j])   // Checking equality
                {
                    for (int k = j; k < l; k++) // Removing then Shifting value
                        arr[k] = arr[k + 1];
                }
                else
                    continue;
    printf("\nAfter removal: ");
    puts(arr);
    return 0;
}