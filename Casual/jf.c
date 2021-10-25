#include <stdio.h>

int main()
{
	int a;
	printf("Enter 1 or 2= ", &a);
	scanf("%d", &a);
	if (a <= 1)
	{
		printf("You Win");
	}
	else if (a >= 2)
	{
		printf("You lost");
	}
	return 0;
}
