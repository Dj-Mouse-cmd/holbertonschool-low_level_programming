#include "main.h"

/**
 * main - check the code for print_last_digit
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	/* Test avec un nombre positif */
	print_last_digit(98);
	/* Test avec zéro */
	print_last_digit(0);
	/* Test avec un nombre négatif et récupération du dernier chiffre */
	r = print_last_digit(-1024);
	/* Affiche à nouveau le dernier chiffre récupéré */
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}

