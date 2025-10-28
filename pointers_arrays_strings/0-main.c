#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);   /* affiche : n=402 */
	reset_to_98(&n);
	printf("n=%d\n", n);   /* affiche : n=98 */
	return (0);
}

