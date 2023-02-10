#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program to assign a random number to a variable in every execution
 * @n: the variable to store a different value
 * Return: is positive if number > 0, is zero if number == 0,
 * is negative if number < 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
