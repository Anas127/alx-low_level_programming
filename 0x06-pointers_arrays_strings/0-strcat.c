#include "main.h"

/**
 * *_strcat - appends src to dest string
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*string != '\0')
		string++;
	while (*src != '\0')
	{
		*string++ = *src++;
	}

	*string = '\0';
	return (dest);
}
