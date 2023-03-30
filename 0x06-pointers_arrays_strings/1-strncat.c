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

	while (*string != '\0')
		string++;
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		*(string + i) = *(src + i);
		i++;
	}
	*(string + i) = '\0';

	return (dest);
}
