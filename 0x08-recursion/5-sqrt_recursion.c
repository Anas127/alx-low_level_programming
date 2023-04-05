#include "main.h"

/**
 * _sqrt_recursion - return square root
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	

	while (i * i <= n)
		i++;
	return (_sqrt_recursion(n - i + 1) + (i - 1));
}
