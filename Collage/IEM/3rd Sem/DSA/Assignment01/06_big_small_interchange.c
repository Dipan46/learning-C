#include <stdio.h>

int main()
{
    int arr[5], temp;

    printf("Enter the numbers\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    int *min = &arr[0], *max = &arr[0];

    printf("Array is: ");
    for (int i = 0; i < 5; i++)
        printf("%d\t", arr[i]);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < *min)
            min = &arr[i];
        if (arr[i] > *max)
            max = &arr[i];
    }
    temp = *min;
    *min = *max;
    *max = temp;

    printf("\nArray is: ");
    for (int i = 0; i < 5; i++)
        printf("%d\t", arr[i]);

    return 0;
}