#include "main.h"

/**
 * *_strncat - concat two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		*(dest + i++) = *(src + j++);
	}
	*(dest + i) = '\0';

	return (dest);
}
