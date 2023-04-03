#include "main.h"

/**
 * *_strchr - locates a char in a string
 * @s: string
 * @c: char
 * Return: first occurence of c, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;

	}
	if (c == '\0')
		return (s);
	return (NULL);
}
