#include <stdio.h>

/**
 * main - a program that prints a triangle
 * If the size is zero or less, the function should only print a new line
 * Character '#' would be used in printing the triangle
 *
 * Return: void
 */

int main(void)
{
	int x, y;
	int size = 10;

	if (size <= 0)
	{
		putchar('\n');
	}

	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if ((x + y) <= size)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
