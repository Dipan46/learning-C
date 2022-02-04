#include <stdio.h>
int main()
{
    int i, j, p, N;
    printf("Enter the length of array: ");
    scanf("%d", &N);
    printf("\n");
    N++;
    int arr[N];
    for (i = 0; i < N; i++)
    {
        printf("Enter place %d value: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position you want to remove: ");
    scanf("%d", &p);
    printf("\n");
    for (i = p; i < N; i++)
        arr[i] = arr[i + 1];
    for (i = 0; i < N - 1; i++)
        printf("Place %d value: %d\n", i, arr[i]);
    return 0;
}
