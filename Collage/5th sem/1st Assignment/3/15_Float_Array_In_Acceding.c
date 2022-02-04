#include <stdio.h>
int main()
{
    int n = 5, i;
    float arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d float value: ", i + 1);
        scanf("%f", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Acceding order is: ");
    for (i = 0; i < n; i++)
    {
        printf("%.3f", arr[i]);
        if (i < n - 1)
            printf(", ");
    }
    return 0;
}
