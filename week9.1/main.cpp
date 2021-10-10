#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a;
	printf("half of height of hourglass = ");
	scanf("%d", &a);
	char x[] = "*";

	for (int i = 0; i < a - 1; i++)
	{
		printf("%*s", i + 1, x);
		for (int j = 2 * (a - i - 1); j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("%*s\n", a, x);
	for (int i = 0; i < a - 1; i++)
	{
		printf("%*s", a - 1 - i, x);
		for (int j = 0; j < 2 * (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}