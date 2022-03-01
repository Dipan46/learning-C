#include <stdio.h>
void bubble(float[], int);
int main()
{
    int n, i;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    float arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d float value: ", i + 1);
        scanf("%f", &arr[i]);
    }

    bubble(arr, n);
    return 0;
}
void bubble(float arr[], int k)
{
    int i, j;
    for (i = 0; i < j; i++)
        for (j = i + 1; j < k; j++)
        {
            if (arr[i] > arr[j])
            {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    printf("Acceding order is: ");
    for (i = 0; i < k; i++)
        printf("\n%.3f", arr[i]);
}