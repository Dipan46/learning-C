#include <stdio.h>
void bubble(int[], int);
int main()
{
    int n = 5, i;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d float value: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubble(arr, n);
    return 0;
}
void bubble(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    printf("Acceding order is: ");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }
}