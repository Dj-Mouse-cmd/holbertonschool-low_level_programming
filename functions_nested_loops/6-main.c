#include "main.h"
#include <stdio.h>

/**
 * main - check the _abs function
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);  /* Test avec un nombre négatif */
	printf("%d\n", r);

	r = _abs(0);   /* Test avec zéro */
	printf("%d\n", r);

	r = _abs(1);   /* Test avec un nombre positif */
	printf("%d\n", r);

	r = _abs(-98); /* Test avec un autre nombre négatif */
	printf("%d\n", r);

	return (0);
}

