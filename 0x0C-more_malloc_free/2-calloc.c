#include "main.h"

/**
 * _memset - fills memory
 * @s: char
 * @b: char
 * @n: int
 * Return: a pointer
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - allcoates using malloc for array
 * @nmemb: int
 * @size: int
 * Return: a ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
