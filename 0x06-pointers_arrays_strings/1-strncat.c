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
	char *string = dest;

	while (*dest != '\0')
		dest++;
	size_t i = 0;

	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (string);
}
