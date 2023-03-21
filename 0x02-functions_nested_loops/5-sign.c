#include "main.h"

/**
 * print_sign - prints sign of the number
 * @n: number to be checked
 * Return: 1 if n is positive, 0 if it equals 0 and -1 if it is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
