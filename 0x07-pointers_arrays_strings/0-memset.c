#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: param
 * @b: param
 * @n: number of bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;
	return (s);
}
