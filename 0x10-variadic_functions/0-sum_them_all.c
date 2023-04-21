#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 * @n: param
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	int sum;

	sum = 0;
	va_start(a, n);
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
