#include "main.h"

/**
 * main - check the _isalpha function
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _isalpha('H'); /* test majuscule */
	_putchar(r + '0');

	r = _isalpha('o'); /* test minuscule */
	_putchar(r + '0');

	r = _isalpha(108); /* test code ASCII 'l' */
	_putchar(r + '0');

	r = _isalpha(';'); /* test caractère non alphabétique */
	_putchar(r + '0');

	_putchar('\n'); /* saut de ligne à la fin */

	return (0);
}

