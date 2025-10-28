#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: The function prints a diagonal using '\'.
 * Each new line is indented by one more space.
 * If n <= 0, it prints only a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++) /* nombre de lignes */
		{
			for (j = 0; j < i; j++) /* espaces avant '\' */
			{
				_putchar(' ');
			}
			_putchar('\\'); /* imprime le caractère diagonal */
			_putchar('\n');  /* retour à la ligne */
		}
	}
}

