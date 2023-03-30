#include "main.h"

/**
 * *string_toupper - changes lowercase letters to uppercase
 * @s: string
 * Return: string
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 'a' - 'A';
		p++;
	}
	return (s);
}
