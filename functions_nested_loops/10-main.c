#include "main.h"
#include <stdio.h>

/**
 * main - check the add function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);

	n = add(-50, 20);
	printf("%d\n", n);

	n = add(0, 0);
	printf("%d\n", n);

	n = add(1024, 2048);
	printf("%d\n", n);

	return (0);
}

