#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program to assign a random number to a variable when executed
 * Return: void
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of ");
	printf("%d ", n);
	printf("is ");

	if ((n % 10) > 5)
	{
	printf("%d and is greater than 5\n", (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("%d and is 0\n", (n % 10));
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", (n % 10));
	}
	return (0);
}

