#include "main.h"

/**
 * main - check the print_sign function
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);   /* Number greater than 0 */
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0);    /* Number equal to 0 */
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0xff); /* Number greater than 0 (255) */
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(-1);   /* Number less than 0 */
	_putchar(',');
	_putchar(' ');
	_putchar('-');        /* Affiche le signe directement */
	_putchar('1');        /* Affiche la valeur de retour -1 correctement */
	_putchar('\n');

	return (0);
}

