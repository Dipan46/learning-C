#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, index = 0;
	printf("Enter Number: ");
	scanf("%d", &n);

	//do while loop
	do
	{
		printf("%d\n", index);
		index = index + 1;
	} while (index < n);

	return 0;
}
