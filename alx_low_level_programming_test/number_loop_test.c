#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * The program executes codes using putchar
 *
 * Return: void
 */

int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
