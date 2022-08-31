#include <stdio.h>
void display(int[], int);
void insert(int[], int, int, int);

int main(void)
{
  int arr[10] = {7, 8, 12, 27, 88};
  int place, number, length;

  printf("Enter place, number, and length: ");
  scanf("%d, %d, %d", &place, &number, &length);

  insert(arr, place, number, length);

  return 0;
}

void insert(int arr[], int p, int n, int l) // 3, 46, 6
{
  for (int i = l; i >= p; i--)
    arr[i + 1] = arr[i];

  arr[p] = n;
  display(arr, l);
}

void display(int arr[], int l)
{
  for (int i = 0; i <= l; i++)
    printf("%d\n", arr[i]);
}
