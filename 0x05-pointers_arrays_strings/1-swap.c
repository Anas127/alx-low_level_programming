#include "main.h"

/**
 * swap_int  - swaps values of two ints
 * @a: pointer to an int
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
