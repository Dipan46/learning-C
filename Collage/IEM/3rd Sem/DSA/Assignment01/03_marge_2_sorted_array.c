#include <stdio.h>
int main()
{
    int arr1[] = {0, 2, 4, 6, 8};
    int arr2[] = {1, 3, 5, 7, 9};
    int arr_m[11], i = 0, j = 1;

    for (int n = 0; n <= 10; n++)
    {
        arr_m[i] = arr1[n];
        arr_m[j] = arr2[n];

        i += 2;
        j += 2;
    }
    for (int k = 0; k < 10; k++)
    {
        if (k == 0)
            printf("{");
        printf("%d", arr_m[k]);
        if (k < 9)
            printf(", ");
        if (k == 9)
            printf("}");
    }
    return 0;
}
