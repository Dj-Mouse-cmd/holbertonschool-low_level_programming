#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;      /* prend le reste de n / 10 */
	if (last < 0)
	last = -last;   /* rendre positif si négatif */

	_putchar('0' + last);  /* afficher le chiffre */
	return (last);          /* retourner le chiffre */
}

