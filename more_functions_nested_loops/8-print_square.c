#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square
 *
 * Description: Uses the character '#' to print a square of 'size' by 'size'.
 * If size is 0 or less, prints only a newline.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++) /* lignes */
		{
			for (j = 0; j < size; j++) /* colonnes */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

