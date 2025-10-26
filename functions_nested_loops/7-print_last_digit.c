#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer input
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	n = -n;       /* On s'assure que le nombre est positif */
	last = n % 10;    /* On récupère le dernier chiffre */
	_putchar(last + '0'); /* On l'affiche */
	return (last);
}

