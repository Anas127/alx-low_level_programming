#include "main.h"

/**
 * _islower - tests if a character is lowercase
 * @c: the checked char
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
