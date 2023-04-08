#include "main.h"


/**
 * helper_func - auxiliary func
 * @i: int
 * @y: int
 * Return: value
 */

int helper_func(int i, int y)
{
	if (i * i == y)
		return (i);
	if (i * i > y)
		return (-1);
	return (helper_func(i + 1, y));
}





/**
 * _sqrt_recursion - return square root
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper_func(1, n));

}
