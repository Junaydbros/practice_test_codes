#include <stdio.h>

/**
 * main - program that computes a factorial
 *
 * Return: void
 */

int main(void)
{
	int ans = 1;

	int i;

	for (i = 2; i <= 10; i++)
	{
		ans = ans * i;
	}
	printf("The answer = %d\n", ans);

	return (0);
}
