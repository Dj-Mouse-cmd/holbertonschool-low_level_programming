#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: the size of the triangle
 *
 * Description: Prints a right-aligned triangle using the character '#'.
 * If size <= 0, prints only a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print spaces */
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		/* Print # */
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		/* New line after each row */
		_putchar('\n');
	}
}

