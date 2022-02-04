#include <stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the length of array: ");
    scanf("%d", &N);
    N++;
    int arr[N];
    for (i = 0; i < N; i++)
    {
        printf("Enter place %d value: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the place you want to put the value: ");
    scanf("%d", &j);
    printf("Enter the value: ");
    scanf("%d", &arr[j]);
    for (i = 0; i < N; i++)
        printf("Place %d value is: %d\n", i, arr[i]);
    return 0;
}
