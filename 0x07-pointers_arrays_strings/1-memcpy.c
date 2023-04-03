#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: param
 * @src: param
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
		*dest++ = *src++;
	return (dest);
}
