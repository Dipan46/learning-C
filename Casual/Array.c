#include <stdio.h>
#define N 5
int main()
{
    int arr[N], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks obtained in sub %d: ", i);
        scanf("%d", arr[i]);
    }
    return 0;
}